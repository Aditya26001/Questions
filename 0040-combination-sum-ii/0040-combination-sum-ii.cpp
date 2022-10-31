class Solution {
public:
    void combosum( vector<vector<int>>&ans, vector<int>&temp , int index , int n , int target,vector<int>& candidates ){
        //base case
        if(target==0){
            ans.push_back(temp);
            return;
        }
        
        //first element 
        
        for(int i = index ; i<n ; i++){
            
            if( i>index && candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]>target) break;
                
            temp.push_back(candidates[i]);
            combosum(ans,temp,i+1,n,target-candidates[i],candidates);
            temp.pop_back();
            
        }
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        //brute force can be same as combo sum 1 and using hashset and convert into vector.
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int>temp;
        int n = candidates.size();
        
        combosum(ans,temp,0,n,target,candidates);
        return ans;
            
        
    }
};