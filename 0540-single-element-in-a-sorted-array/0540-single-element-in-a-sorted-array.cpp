class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        
        int l = 0 , r = n-1;
        int mid;
        int num;
        while(l<r){
            mid = (l+r)/2;
            if(mid%2==0){
                num = mid+1;
            }
            else{
                num = mid-1;
            }
            if(nums[mid]==nums[num]) l = mid+1;
            else r = mid;
        }
        
        return nums[l];
    }
};