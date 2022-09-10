class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxc = INT_MIN;
        int count = 0;
        
        for(int i = 0 ;i< nums.size() ; i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count = 0;
            }
            maxc= max(maxc,count);
        }
        return maxc;
    }
};