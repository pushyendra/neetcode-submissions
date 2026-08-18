class Solution {
public:
    int appendCharacters(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();
        int i=0;int inner=0;
        for(i=0;i<s_len;i++){
            if(s[i] == t[inner]){
                inner++;
            }

            if(inner == t_len){
                return 0;
            }
        }
        int sub = t_len - inner;
        return sub;
        
    }
};