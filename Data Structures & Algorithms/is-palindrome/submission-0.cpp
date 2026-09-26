class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";

        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) {
                newStr += tolower(s[i]);
            }
        }

        return newStr == string(newStr.rbegin(), newStr.rend());
    }
};