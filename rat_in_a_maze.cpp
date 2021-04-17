#include<bits/stdc++.h>
using namespace std;
void print_maze(int solution[][100] , int n)
{
    // cout<<"inside print"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<solution[i][j]<<" ";
        }
    }
    cout<<endl;

}
void get_maze(int maze[][20], int  solution[][100], int n, int x, int y)
{
    if(x== n-1 && y == n-1)
    {
        // cout<<"inside get_maze"<<endl;
        solution[x][y] =1;
        print_maze(solution , n);
        return;
    }

    if(x >= n || y>= n || x<0 || y <0 || solution[x][y] == 1 || maze[x][y] ==0)
    {
        // cout<<"inside if "<<endl;
        return; 
    }

    solution[x][y] =1;

    get_maze(maze , solution , n , x , y-1);
    get_maze(maze , solution , n , x , y+1);
    get_maze(maze , solution , n , x-1 , y);
    get_maze(maze , solution , n , x+1 , y);
    
    solution[x][y] =0;
    return ; 
}

void set_maze(int maze[][20] ,  int n)
{
    int solution[n][100];
    memset(solution , 0 , sizeof(int)*3*3);   
    get_maze(maze, solution, n , 0 , 0);
}


int main()
{
    int n;
    cin>>n;
    int maze[20][20];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>maze[i][j];
        }
    }

    set_maze(maze, n);
}