class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string s : strs){
            res.append(to_string(s.length()));
            res.append("#");
            res.append(s);
        }

        return res;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> res;
        while(i<s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }

            int len = stoi(s.substr(i,j-i));
            
            i = j+1;
            j = j + len + 1;

            res.push_back(s.substr(i,len));
            i=j;

        }

        return res;
    }
};
