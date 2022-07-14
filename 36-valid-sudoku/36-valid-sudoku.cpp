class Solution {
public:
    
    bool subboxcheck(int rowcornerpoint,int columncornerpoint,vector<vector<char>>& board)
    {
        unordered_map<char,int>mymap;
        for(int i=rowcornerpoint;i<rowcornerpoint+3;i++)
        {
            for(int j=columncornerpoint;j<columncornerpoint+3;j++)
            {
                if(board[i][j]=='.')
                    continue;
                if(board[i][j]<=48 || board[i][j]>57)
                    return false;
                if(mymap.find(board[i][j])!=mymap.end())
                    return false;
                mymap[board[i][j]]=1;
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<char, int>m1;
        unordered_map<char, int>m2;
        unordered_map<char, int>m3;
        int c=0;
        for(int r=0;r<board.size();r++)
        {
            while(c<9)
            {
                if(board[r][c]!='.')
                    m1[board[r][c]]++;
                c++;
            }
                for(auto x: m1)
                {    
                    if(x.second>1) return false;}
                c=0;
            m1.clear();
        }
        
        int r=0;
        for(int c=0;c<board.size();c++)
        {
            while(r<9)
            {
                if(board[r][c]!='.')
                    m2[board[r][c]]++;
                r++;
            }
                for(auto x: m2)
                    if(x.second>1) return false;
                r=0;
        m2.clear();
        }
        int rowpoint,columnpoint,i,j;
        columnpoint=rowpoint=0;
        for(i=0;i<3;i++,rowpoint+=3)
        {
            for(j=0;j<3;j++,columnpoint+=3)
            {
                if(subboxcheck(rowpoint,columnpoint,board)==false)
                    return false;
            }
            columnpoint=0;
        }
         return true;
    
    }
};
