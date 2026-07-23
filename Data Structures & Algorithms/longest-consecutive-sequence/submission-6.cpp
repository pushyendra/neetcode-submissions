class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.empty() == true){
            return 0;
        }else if((nums.size()) == 1){
            return 1;
        }

        //sorting
        sort(nums.begin(),nums.end());
        //removing duplicates
        auto last = unique(nums.begin(),nums.end());
        nums.erase(last,nums.end());

        int k=1;
        vector<int> res;
        res.push_back(1);
        for(int i=0;i<(nums.size()-1);i++){
            if((nums[i+1]- nums[i]) == 1){
                    k++;
                    res.push_back(k);
            }else if((nums[i+1] - nums[i]) ==0){

            }
            else{
                k = 1;
            }
        }

        sort(res.begin(),res.end(),greater<int>());
        return res[0];
    }
};
