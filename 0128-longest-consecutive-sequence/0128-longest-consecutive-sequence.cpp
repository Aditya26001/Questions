class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> arr;
        int n = nums.size();
        int ans=0;
        
        for(int i=0 ;i<n ;i++){
            arr.insert(nums[i]);
        }
        
        for(int num:nums){
            if(arr.count(num-1)) {
                continue;
            }
            int j=1;
            while(arr.count(num+j)) j++;
            ans = max(j,ans);
        }
        return ans;
    }
};