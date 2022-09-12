class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int ans;
        
        for(int i = 0 ; i<nums.size() ; i++){
                mp[nums[i]]++;
        }
        
        for(auto itr = mp.begin() ; itr!=mp.end() ; itr++){
            if(itr->second > nums.size()/2){
                ans = itr->first;
               }
        }
        return ans;
    }
};