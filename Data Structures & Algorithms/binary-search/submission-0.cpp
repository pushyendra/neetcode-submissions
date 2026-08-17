class Solution {
public:
    int recurse(int first,int last,vector<int>& arr,int target){
            if(first > last){
                return -1;
            }else{
                int mid = (first+last)/2;
                if(target < arr[mid]){
                    return recurse(first,mid-1,arr,target);
                }else if(target > arr[mid]){
                    return recurse(mid+1,last,arr,target);
                }else if(target == arr[mid]){
                    return mid;
                }
            }
        }
    
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        return recurse(0,(len-1),nums,target);
    }
};
