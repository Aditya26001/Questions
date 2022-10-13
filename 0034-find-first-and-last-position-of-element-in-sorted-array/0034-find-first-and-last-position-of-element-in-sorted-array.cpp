class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int first = firstocc(nums,target);
        int last  = lastocc(nums,target);
        v.push_back(first);
        v.push_back(last);
        return v;

        
        
        
       
    }
public:
   int firstocc(vector<int>& nums, int target){
       int s = 0;
       int l = nums.size()-1;
       int ans1 = -1;
       while(s<=l){
          int m = s+(l-s)/2;
           if(nums[m]==target){
               ans1 = m;
               l = m-1;
           }
           else if(nums[m]<target){
               s = m+1;
           }
           else{
               l = m-1;
           }
       }
       
       return ans1;
       
       
        }
    
   int lastocc(vector<int>& nums, int target){
       int s = 0;
       int l = nums.size()-1;
       int ans2 = -1;
       while(s<=l){
          int m = s+(l-s)/2;
           if(nums[m]==target){
               ans2 = m;
               s = m+1;
           }
           else if(nums[m]<target){
               s = m+1;
           }
           else{
               l = m-1;
           }
       }
       
       return ans2;
       
       
        }
};