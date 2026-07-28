class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       sort(s1.begin(),s1.end());
        int len = s1.length();
        if(s2.length() != 0){
            for(int i=0;i+len <= (s2.length());i++){
                string temp = s2.substr(i,len);
                sort(temp.begin(),temp.end());
                if(s1 == temp){
                    return true;
                }
            }
        }

        return false;
    }
};
