class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r, vector<int>(c, 0));
       // int ansmat[r][c];
        
        if(mat.size() == r && mat[0].size() == c
          || r * c != mat.size() * mat[0].size())
            return mat;

        int m=0, l=0;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(m>=c)
                {
                    m=0;
                    l++;
                }
               ans[l][m]=mat[i][j];
                m++;
            }
        }
        
        // for(int i=0;i<r;i++)
        // {
        //     for(int j=0;j<c;j++)
        //     {
        //         ans[i].push_back(ansmat[i][j]);
        //     }
        // }
        return ans;
    }
};