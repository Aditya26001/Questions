class Solution {
    
    
    //palindrome check karna hai 2 pointer ke saath. jahan pe mismatch hua wahan 1 skip kar sakte hain. toh iska 2 case ban sata hai - left skip ya right skip.uske baad palindrome aana chhaiye lekin. agar wahan bhi palindrome nh aata hai toh false condition hai.  dono case ko consider krke or operation se return karwana hai.
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        int l1,l2;
        int r1,r2;
        bool case1 = true;
        bool case2 = true;
        
        while(l<r){
            if(s[l]!=s[r]){
                l1 = l+1;
                r1 = r;
                l2 = l;
                r2 = r-1;
                while(l1<r1){
                    if(s[l1]!=s[r1]){
                        case1 = false;
                        break;
                    }
                    l1++;
                    r1--;
                }
                
                while(l2<r2){
                    if(s[l2]!=s[r2]){
                        case2 = false;
                        break;
                    }
                    l2++;
                    r2--;
                }
                    return case1||case2;
                }
            
              l++;
             r--;
            }
            
            
          return true;
        }
            
    
};