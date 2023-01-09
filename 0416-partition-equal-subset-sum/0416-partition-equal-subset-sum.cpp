class Solution {
public:
    bool solve(int index, int target , vector<int>& nums,  vector<vector<int>>&dp){
        //base
        if(target==0) return true;
        if(index==0) return nums[0]==target;
        
        if(dp[index][target]!=-1) return dp[index][target];
        
        bool ntake = solve(index-1,target,nums,dp);
        bool take = false;
        if(nums[index]<=target) take = solve(index-1,target-nums[index],nums,dp);
        return dp[index][target] = take||ntake;
    }
    
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            }
        if(sum%2==1) return false;
        vector<vector<int>> dp(n,vector<int>((sum/2)+1,-1));        
        bool ans = solve(n-1,sum/2,nums,dp);
        return ans;
    }
};