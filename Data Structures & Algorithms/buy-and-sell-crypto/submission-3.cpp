class Solution {
public:

    struct values{
        int start;
        int end;
        int sum;
    };

    values find_cross_max_subarray(vector<int>& sec,int low,int mid,int high){
        int left_sum = INT_MIN;
        int left_index;int sum=0;

        for(int i=mid;i>=low;i--){
            sum = sum + sec[i];
            if(sum > left_sum){
                left_sum = sum;
                left_index = i;
            }
        }

        int right_sum = INT_MIN;
        int right_index;
        sum = 0;
        for(int i=mid+1;i<=high;i++){
            sum = sum + sec[i];
            if(sum > right_sum){
                right_sum = sum;
                right_index = i;
            }
        }

        return {left_index,right_index,(left_sum + right_sum)};

    }

    values find_max_subarray(vector<int>& sec,int low,int high){
        if(low == high){
            return {low,high,sec[low]};
        }else{
            int mid = (low + high)/2;
            values left = find_max_subarray(sec,low,mid);
            values right = find_max_subarray(sec,mid+1,high);
            values center = find_cross_max_subarray(sec,low,mid,high);

            if( (left.sum >= right.sum) && (left.sum >= center.sum)){
                return left;
            }else if( (right.sum >= left.sum) && (right.sum >= center.sum)){
                return right;
            }else{
                return center;
            }
        }
    }

    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2){return 0;}

        vector<int> sec;
        for(int i=0;i<(prices.size()-1);i++){
            int temp = prices[i+1] - prices[i];
            sec.push_back(temp);
        }

        values v = find_max_subarray(sec,0,(sec.size() - 1));

        if(v.sum > 0){
            return v.sum;
        }else{
            return 0;
        }
    }
};
