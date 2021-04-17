#include<bits/stdc++.h>
using namespace std;

#define f(i, size) for(int i=0; i<size; i++)
#define ll long long 

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int *arr = new int[n];
        f(i, n)
        {
            cin>>arr[i];
        }

        ll sum = 0;
        f(i, n-1)
        {
            sum += abs(arr[i+1] - arr[i]) -1;
        }

        cout<<sum<<endl;
        delete[] arr;
    }
}