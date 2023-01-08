class Solution {
public:
    bool rotateString(string s, string goal) {
        int len = s.length();
        if(s.length()!=goal.length()) return false;
        if(s==goal) return true;
        
        while(len--){
            if(s==goal) return true;
            
            s = s.substr(1) + s[0];
        }
        return false;
    }
};