class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            temp = abs(temp);
            if(nums[temp] < 0){
                return temp;
            }else{
                int tempo = nums[temp];
                nums[temp] = -tempo;
            }
        }
        return 0;
    }
};
