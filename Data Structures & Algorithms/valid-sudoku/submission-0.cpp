class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         map<int,set<char>>r,c;
        map<pair<int,int>,set<char>>square;
        for(int row=0;row<9;row++)
        {
            for(int col=0;col<9;col++)
            {
                char ch=board[row][col];
                if(ch=='.')
                    continue;
                if(r[row].count(ch) || c[col].count(ch) || square[{row/3,col/3}].count(ch))
                    return false;
                r[row].insert(ch);
                c[col].insert(ch);
                square[{row/3,col/3}].insert(ch);
            }
        }
        return true;
    }
};
