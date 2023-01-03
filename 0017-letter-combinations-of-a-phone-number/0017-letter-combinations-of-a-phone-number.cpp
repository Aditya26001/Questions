class Solution {
public:
    void solve(int index , string mapp[] , vector<string>&ans , string output , string digits){
        //base
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }

        int num = digits[index]-'0';
        string str = mapp[num];

        for(int i=0 ; i<str.length();i++){
            output.push_back(str[i]);
            solve(index+1,mapp,ans,output,digits);
            output.pop_back();
        }

    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0){
            return ans;
        }
        string output = "";
        int index = 0;
        string mapp[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(index,mapp,ans,output,digits);
        return ans;
    }
};