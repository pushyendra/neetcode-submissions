class Solution {
public:
    stack<int> stack;
    int evalRPN(vector<string>& tokens) {
        for( string s : tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                    int num1 = stack.top(); stack.pop();
                    int num2 = stack.top(); stack.pop();
                    int total=0;

                    if(s == "+"){
                        total = num1+num2;
                    }else if(s == "-"){
                        total = num2-num1;

                    }else if(s == "/"){
                        if((num1 == 0) || (num2 == 0)){
                            total = 0;
                        }else{
                            total = num2/num1;
                        }

                    }else if(s == "*"){
                        total = num1*num2;
                    }

                    stack.push(total);
            }else{
                int num = stoi(s);
                stack.push(num);
            }  
        }

        int res = stack.top();
        return res;
    }
};
