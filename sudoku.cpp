#include<bits/stdc++.h>
using namespace std;
#define N 9 
bool no_space_board(int board[N][N], int &row, int &column)
{
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(board[i][j] == 0)
                {
                    row = i;
                    column = j;
                    return true;
                }

    return false;
}
bool check_for_i(int board[N][N], int row, int column, int ele)
{
    for(int i=0; i<N; i++)
        if(board[i][column] == ele)
            return false;

    for(int i=0; i<N; i++)
        if(board[row][i] == ele)
            return false;

    int x= row/3, y= column/3; 
    for(int i= 3*x; i<3*x + 3; i++)
        for(int j= 3*y; j<3*y + 3; j++)
            if(board[i][j] == ele)
                return false;

    return true;
        
}


bool set_sudoku(int board[N][N])
{
    int row, column;
    if(!no_space_board(board, row, column))
    {
        return true;
    }



    for(int i=1; i<=9; i++)
    {
        if(check_for_i(board, row, column, i))
        {
           board[row][column] = i;
           if(set_sudoku(board))
           {
               return true;
           }  
           board[row][column] = 0;
        }
    }
    return false;
}

void printSudoku(int board[N][N])
{
    for(int i=0; i<N; i++)
    {    for(int j=0; j<N; j++)
        {
             cout<<board[i][j];
        }
        cout<<endl;}
}
int main()
{
    int board[N][N];
    int arr[9];
 
    // for(int i=0; i<N; i++)
    // {
    //     cin>>arr[i];
    //     for(int j=N-1; j>=0 ; j--)
    //     {
    //         int rem = arr[i]%10;
    //         board[i][j] = rem;
    //         arr[i] = arr[i]/10;
    //     }
    // }
 
 
     for(int i=0; i<N; i++)
         for(int j=0; j<N; j++)
             cin>>board[i][j];
        
        if(set_sudoku(board))
            cout<<"true"<<endl;

        else 
            cout<<"false"<<endl;
            // printSudoku(board);

}