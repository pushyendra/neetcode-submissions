class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;int n= nums.size();
        vector<int> res;

        for(int i=0;i<n;i++){
            int prefix=1;

                for(int j=(i-1);j>=0;j--){
                    prefix *= nums[j];
                }
            

            int sufix = 1;
                for(int j =(i+1);j<n;j++){
                    sufix *= nums[j];
                }
            

            res.push_back(prefix * sufix);
        }

        return res;
    }
};
