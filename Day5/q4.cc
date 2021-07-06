/*Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix[0].size());
        for(int i = 0 ; i < matrix[0].size(); i++){
            for(int j = 0 ; j < matrix.size() ; j++)  res[i].push_back(matrix[j][i]);
        }
        return res;
    }
};