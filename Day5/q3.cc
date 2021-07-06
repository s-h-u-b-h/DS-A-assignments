/*toeplitz_matrix*/
bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j]) return false;
            }
        }
        return true;
    }