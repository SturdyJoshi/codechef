#include<bits/stdc++.h>
#define f(i, size) for(int i=0; i<size; i++)
using namespace std;

void print_ans(int k)
{
    char **arr = new char*[8];
    f(i, 8)
    {
        arr[i] = new char[8];
        f(j, 8)
            arr[i][j] = 'X';
    }

    int row = k/8;
    int col = k%8;
        
    if(row ==8)
    {
        f(i, 8)
            f(j, 8)
                arr[i][j] = '.';
    }    

    else if(row ==0)
    {
        f(j, col)
            arr[0][j] = '.';
    }

    else
    {
        f(i, row)
            f(j, 8)
                arr[i][j] = '.';

        f(j, col)
            arr[row][j] = '.';

    }
    
    arr[0][0] = 'O';
    f(i, 8)                     // print the answer.
    {
        f(j, 8)
            cout<<arr[i][j];
        cout<<endl;
    }

    f(i, 8)
        delete[] arr[i];
    delete [] arr;
}

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int k;
        cin>>k;
        print_ans(k);      
    }
}