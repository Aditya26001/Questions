class Solution {
public:
    void findCombo(int ind , int target , vector<vector<int>>&ans , vector<int>& candidates,int n,vector<int>ds){
        //base case
        if(ind==n){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(target>=candidates[ind]){
        ds.push_back(candidates[ind]);
        findCombo(ind,target-candidates[ind],ans,candidates,n,ds);
        ds.pop_back();
        }
        
        findCombo(ind+1,target,ans,candidates,n,ds);
        
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n = candidates.size();
        findCombo(0,target,ans,candidates,n,ds);
        return ans;
    }
};