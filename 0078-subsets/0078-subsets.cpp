class Solution {
public:
    void subsequence(vector<int> &input, int index  ,vector<int> &subans , vector<vector<int>>&ans )
{
    if (index == input.size())
    {
       ans.push_back(subans);
        
        return;
    }
        subans.push_back(input[index]);
        subsequence(input, index + 1, subans,ans);
        subans.pop_back();
        subsequence(input, index + 1, subans,ans);
}
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subans;
        subsequence(nums, 0 , subans, ans);
        return ans;
        
    }
};