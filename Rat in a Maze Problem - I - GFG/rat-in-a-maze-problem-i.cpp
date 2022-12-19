//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool check(int x,int y,int n , vector<vector<int>> &m , vector<vector<bool>>&visited ){
        if((x<n && y<n) && (x>=0 && y>=0) && m[x][y]==1 && visited[x][y]!=1){
            return true;
        }
        else
            return false;
    }
    
    public:
    void way(int x , int y , int n , vector<string>&ans , vector<vector<bool>>&visited,
      string path, vector<vector<int>> &m){
          //base 
          if(x==n-1 && y==n-1){
              ans.push_back(path);
              return;
          }
          
          //down movement
          if(check(x+1,y,n,m,visited)){
              visited[x][y]=1;
              way(x+1,y,n,ans,visited,path+'D',m);
              visited[x][y]=0;
          }
          //left
           if(check(x,y-1,n,m,visited)){
              visited[x][y]=1;
              way(x,y-1,n,ans,visited,path+'L',m);
               visited[x][y]=0;
          }
          //right
          
           if(check(x,y+1,n,m,visited)){
              visited[x][y]=1;
              way(x,y+1,n,ans,visited,path+'R',m);
               visited[x][y]=0;
          }
          //up
           if(check(x-1,y,n,m,visited)){
              visited[x][y]=1;
              way(x-1,y,n,ans,visited,path+'U',m);
               visited[x][y]=0;
          }
          
          return;
      }
      
      
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<bool>>visited(n , vector<bool> (n,0));
        string path = "";
        
        if(m[0][0]==0){
            return ans;
        }
        
        way(0,0,n,ans,visited,path,m);
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
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends