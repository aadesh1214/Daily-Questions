class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int k=matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++)
        {
            if(target>matrix[i][0] && target<=matrix[i][k]);
            {
                for(int j=0;j<matrix[i].size();j++)
                {
                    if(matrix[i][j]==target)
                    {
                        return true;
                    }
                }
             }
        }
        return false;
    }
};
