class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        vector<int> res;
        int i=0;int j= n-1;

        while(i != j){

            if((numbers[i] + numbers[j]) > target){
               j = j-1;
            }
            else if( (numbers[i] + numbers[j]) < target){
                i =i+1;
            }else{
                break;
            }
        }

        i=i+1;
        j=j+1;
        res.push_back(i);
        res.push_back(j);

        return res;


    }
};
