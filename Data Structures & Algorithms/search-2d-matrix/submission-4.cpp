class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int n= matrix[0].size();
        int res_row=0;
        for(int i=0;i<m;i++){
            int fir = matrix[i][0];
            if((fir <= target)){
                res_row = i;
            }else{
                break;
            }
        }

        int row_len = matrix[res_row].size();
        for(int j=0;j<row_len;j++){
            if( target == matrix[res_row][j]){
                return true;
            }
        }

        return false;

    }
};
