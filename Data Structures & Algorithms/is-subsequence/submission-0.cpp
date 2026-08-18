class Solution {
public:
    bool isSubsequence(string s, string t) {
        int t_len = t.length();
        int s_len = s.length();
        int i=0;int inner=0;
        for(i=0;i<t_len;i++){
            if((s[inner] == t[i])){
                inner++;
            }
            if(inner == (s_len)){
                return true;
            }
        }
        return false;

    }
};