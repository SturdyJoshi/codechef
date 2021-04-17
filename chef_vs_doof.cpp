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

        int *arr= new int[n];
        int ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == 0)
            {
                ans = 1;
            }

            
        }
        if(ans == 1)
                cout<<"YES"<<endl;

            else 
                cout<<"NO"<<endl;
    }
}