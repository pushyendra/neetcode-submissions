class Solution {
public:
    bool isValid(string s) {
        int n= s.length();
        // vector<char> sstack;
        stack<char> stack;
        unordered_map <char,char> ClosetoOpen = { {')','('},{'}','{'},{']','['}};
        bool flag = true;
        for(char c:s){
            if((c == ')') || (c == ']') || (c == '}')){
                if(!stack.empty() && (stack.top() == ClosetoOpen[c])){
                    stack.pop();
                }else{
                   return false;
                }
            }else{
                stack.push(c);
            }
        }

        return stack.empty();
    }
};
