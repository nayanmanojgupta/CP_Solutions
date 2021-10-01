//problem link : https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/

#include<bits/stdc++.h>
using namespace std ; 


bool row(vector<vector<char>> &mat, char ch)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            if (mat[i][j] != ch)
                break;
        if (j == 3)
            return true;
    }
    return false;
}

bool col(vector<vector<char>> &mat, char ch)
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            if (mat[j][i] != ch)
                break;
        if (j == 3)
            return true;
    }
    return false;
}

bool diagonal(vector<vector<char>> &mat, char ch)
{
    int i;

    for (i = 0; i < 3; i++)
        if (mat[i][i] != ch)
            break;
    if (i == 3)
        return true;

    for (i = 0; i < 3; i++)
        if (mat[i][2 - i] != ch)
            break;
    if (i == 3)
        return true;

    return false;
}

int solve(vector<vector<char>> &mat)
{
    if (row(mat, 'X') || col(mat, 'X') || diagonal(mat, 'X'))
        return 0;
    else if (row(mat, 'O') || col(mat, 'O') || diagonal(mat, 'O'))
        return 1;
    else
        return -1;
}

string tictactoe(vector<vector<int>> &moves)
{

    vector<vector<char>> mat(3, vector<char>(3, '.'));
    int n = moves.size(), i;
    for (i = 0; i < n; i++)
    {
        mat[moves[i][0]][moves[i][1]] = 'X';
        i++;
        if (i < n)
            mat[moves[i][0]][moves[i][1]] = 'O';
    }

    int result = solve(mat);

    if (result == 0)
        return "A";
    else if (result == 1)
        return "B";
    else if (n == 9)
        return "Draw";
    else
        return "Pending";
}

int main()  {
    int n ;
    cin>>n ; 
    int x , y , i ; 
    vector<vector<int> > moves ; 
    for(i = 0 ; i < n ; i++)  {
        cin>>x>>y ; 
        moves.push_back({x,y}) ; 
    }

    string answer = tictactoe(moves) ; 
    cout<<answer<<endl ; 
}