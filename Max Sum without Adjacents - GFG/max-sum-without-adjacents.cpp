//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int solve(int *arr,int n , int index , vector<int>&dp){
        //base
        if(index<0) return 0;
        if(index==0) return arr[index];
        if(dp[index]!=-1) return dp[index];
        
        
        int sum1 = solve(arr,n,index-2,dp)+arr[index]; //pick
        int sum2 = solve(arr,n,index-1,dp);//not pick
        return dp[index] = max(sum1,sum2);
    }
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int>dp(n+1,-1);
	    int ans;
	    ans = solve(arr,n,n-1,dp);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends