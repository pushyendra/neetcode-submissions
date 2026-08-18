class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=1;i< s.length();i++){
            int fir = s[i];int sec = s[i-1];
            if(fir > sec){
                score = score + (fir-sec);
            }else{score = score+ (sec-fir);}
        }

        return score;
    }
};