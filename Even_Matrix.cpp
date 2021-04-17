#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int **arr = new int* [n], k=1;
        for(int i=0; i<n; i++)
        {
            arr[i] = new int[n];
            for(int j=0; j<n; j++)
            {
                arr[i][j] = k++;
            }
        }

        if(n%2 !=0)
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }

            else
            {
                for(int i=0; i<n; i++)
                {
                    if(i%2 == 0)    
                        for(int j=0; j<n; j++)
                        {
                            cout<<arr[i][j]<<" ";
                        }
                    
                    else
                        for(int j=n-1; j>=0; j--)
                        {
                            cout<<arr[i][j]<<" ";
                        }
                    cout<<endl;
                }

            }
            
        for(int i=0; i<n; i++)
            delete[] arr[i];

        delete [] arr;         
    }
}