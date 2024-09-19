#include <bits/stdc++.h>
#define N 4
using namespace std;

void printBoard(int board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            if (board[i][j])
                cout << "Q ";
            else
                cout << ". ";
        cout << endl;
    }
}

bool isSafe(int board[N][N], int row, int col)
{
    int i, j;

    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// A recursive function to solve N Queen problem
bool solveNQ(int board[N][N], int col)
{
    // base case
    if (col >= N)
        return true;

    for (int i = 0; i < N; i++)
    {
        if (isSafe(board, i, col))
        {
            /* Place this queen in board[i][col] */
            board[i][col] = 1;

            /* recursively try to place rest of the queens */
            if (solveNQ(board, col + 1))
                return true;

            board[i][col] = 0; // BACKTRACK
        }
    }
    return false;
}

bool solve()
{
    int board[N][N] = {{0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0}};

    if (solveNQ(board, 0) == false)
    {
        cout << "No Possible Solution exist";
        return false;
    }

    printBoard(board);
    return true;
}

int main()
{
    solve();
    return 0;
}