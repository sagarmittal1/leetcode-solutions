class Solution {
public:
    bool isPalindrome(int x) {
        if(abs(x) == x) {
            string s = to_string(x);
            string ss = "";
            for(int i = s.size() - 1; i >= 0; i--) {
                ss.push_back(s[i]);
            }
            if(s == ss) {
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }
};