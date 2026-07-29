class Solution {
public:
   bool isnonalpha(char c){
        return !isalnum(static_cast<unsigned char>(c));

   }

    bool isPalindrome(string s) {
        int size = s.length();
        int i=0;int j= size-1;

        while(i<j){
            while( i<j && isnonalpha(s[i])){
                i++;
            }

            while( i<j && isnonalpha(s[j])){
                j--;
            }

            if( tolower(static_cast<unsigned char>(s[i])) != tolower(static_cast<unsigned char>(s[j])) ){
                return false;
            }

            i++;
            j--;
        }
        return true;
    }
   
};
