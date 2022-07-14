class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        for(int line=0;line<numRows;line++)
        {
            pascal.push_back(vector<int>(line+1, 0));
            for(int i=0;i<line+1;i++)
            {
                if(i==0 || i==line)
                    pascal[line][i]=1;
                else
                    pascal[line][i]=pascal[line-1][i-1]+pascal[line-1][i]; 
            }
        }
        
        return pascal;
    }
};