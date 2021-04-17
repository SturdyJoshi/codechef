#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        
        for(int i=0; i<n; i++)
            cin>>arr[i];

        sort(arr, arr+n);
        int sum =0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]- arr[i] >= k)
                {
                    sum+= n-j;
                    j=n;
                }

               
            }
        }
        cout<<sum<<endl;

    }
}