class Solution {
    
public:
    int getPivot(vector<int>&nums){
        int s = 0 , e = nums.size()-1;
        while(s<e){
            int mid = (s+e)/2;
            if(nums[mid]>=nums[0]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
        return s;
    }
    
public:
    int binarySearch(vector<int>&nums, int s , int e , int target){
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else{
                e = mid- 1;
            }
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
     //1. Find pivot element   
     //2. If target is graeter than pivot , apply BS on Second part else 1st part.
        int l = nums.size()-1;
        int pivot = getPivot(nums );
        if(target<=nums[l] && target>=nums[pivot]){
           return binarySearch(nums , pivot , l , target);
        }
        else{
        return  binarySearch(nums , 0 , pivot - 1 , target);
        }
    }

};