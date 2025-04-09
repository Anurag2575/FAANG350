#include<vector>
using namespace std;

bool search2DMatrix(vector<vector<int>>& matrix, int target){
    int rows = matrix.size(), cols = matrix[0].size();
    int row = 0, col = cols - 1;
    //starting from top-right corner
    while(row < rows && col >= 0){
        if(matrix[row][col] == target) return true;
        else if(matrix[row][col] > target) col--;
        else row++;
    }

    return false;
}