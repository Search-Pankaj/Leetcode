class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
      //  if( matrix.size() == 0) return false;
        int height = matrix.size();
        int width = matrix[0].size();
        int row = 0, col = width - 1;
        while(row < height && col >= 0){
            int temp = matrix[row][col];
            if(temp == target) return true;
            else if(temp < target)
                row++;
            else
                col--;
        }
        return false;
    }
    };
