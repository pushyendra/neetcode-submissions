class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left,right;bool flag=true;
        for( left=0;left<nums.size();left++){
            for(right=left+1;right<nums.size();right++){
                if(nums[left] + nums[right] == target){
                    flag=false;
                    break;
                }
            }
            if(flag == false){
                break;
            }
        }

        vector<int> ans;
            ans.push_back(left);
            ans.push_back(right);
        return ans;
        
       
    }
};
