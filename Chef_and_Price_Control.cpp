#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n, x, sum = 0;
        cin>>n>>x;
        int *arr = new int[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i] > x)
            {
                sum+= arr[i] - x;
            }
        }
        cout<<sum<<endl;
        delete[] arr;
    }
}