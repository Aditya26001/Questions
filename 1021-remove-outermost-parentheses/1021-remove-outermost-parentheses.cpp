class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>s1;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(s1.size()>0)
                    ans+='(';
                s1.push('(');
            }else
            {
                if(s1.size()>1)
                    ans+=')';
                s1.pop();
            }
            
        }
        return ans;
    }
};