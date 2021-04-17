#include<bits/stdc++.h>
using namespace std;

int calculate_count(int **arr, int n)
{
    int count =0;
    for(int i=n-1; i>0; i--)
    {
        if(arr[i][i] -1 != arr[i][i-1])
        {
            count++;
            int k= i+1;
            for(int ll=0; ll<k; ll++)
            {
                for(int x=ll; x<k; x++)
                {
                    int temp = arr[ll][x];
                    arr[ll][x] = arr[x][ll];
                    arr[x][ll] = temp;
                }
            }
        }

    }

    return count;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int **arr = new int*[n];
        for(int i=0; i<n; i++)
        {
            arr[i] = new int[n];
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }

        cout<<calculate_count(arr, n)<<endl;
        for(int i=0; i<n; i++)
            delete[] arr[i];
        delete[] arr;
    }
}