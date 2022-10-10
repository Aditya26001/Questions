//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	  int max =0;
	  for(int i = 1 ; i< n ; i++){
	      if(arr[i]>arr[max]){
	          max = i;
	      }
	      
	  }
	  
	  int secmax = -1;
	  
	  for(int i = 0 ; i< n ;i++){
	      if(arr[i]!=arr[max]){
	          if(secmax==-1){
	              secmax = i;
	          }
	          else if(arr[secmax]<arr[i]){
	              secmax = i;
	          }
	      }
	  }
	  if(secmax==-1){
	      return -1;
	  }
	  return arr[secmax];
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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends