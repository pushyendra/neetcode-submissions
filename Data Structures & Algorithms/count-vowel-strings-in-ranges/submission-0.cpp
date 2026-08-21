class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> res;

        for(vector<int> temp : queries){
            int first = temp[0];
            int last = temp[1];
            int noof=0;
            for(int i=first;i<=last;i++){
                string s = words[i];
                int len = s.length();

                if(isVowel(s[0]) && isVowel(s[len-1])){
                    noof++;
                }
            }

            res.push_back(noof);
        }

        return res;
    }

    bool isVowel(char c){
        if( (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u') ){
            return true;
        }else{
            return false;
        }
    }
};