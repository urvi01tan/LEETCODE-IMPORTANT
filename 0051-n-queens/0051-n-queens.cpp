class Solution {
public:
    vector<vector<string>> ans;

    bool canwe(int row, int col, vector<string>& board, int n)
    {
        for(int j = col - 1; j >= 0; j--)
        {
            if(board[row][j] == 'Q')
                return false;
        }

        for(int i = row - 1, j = col - 1;
            i >= 0 && j >= 0; i--, j--)
        {
            if(board[i][j] == 'Q')
                return false;
        }

        for(int i = row + 1, j = col - 1;
            i < n && j >= 0; i++, j--)
        {
            if(board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void fun(vector<string>& board, int n, int c)
    {
        // all n columns filled
        if(c == n)
        {
            ans.push_back(board);
            return;
        }

        for(int row = 0; row < n; row++)
        {
            if(canwe(row, c, board, n))
            {
                board[row][c] = 'Q';

                fun(board, n, c + 1);

                board[row][c] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<string> board(n, string(n, '.'));

        fun(board, n, 0);

        return ans;
    }
};