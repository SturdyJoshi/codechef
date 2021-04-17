#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define x 1000000007;
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        unsigned int temp;
        int n,q,ptr=0;
        cin>>n>>q;
        int sum=0;
        int ar[q][2];
        for(int i=0;i<q;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>temp;
                ar[i][j]=temp%x;
            }
        }

        for(int i=0;i<q;i++)
        {
                   int ans1=abs(ar[i][0]-ptr)%x;
                    int ans2=abs(ar[i][1]-ar[i][0])%x;
                    sum+= (ans1+ans2)%x;
                    ptr=ar[i][1]; 
                    // cout<<sum<<endl;             
        }

        cout<<sum;
}
}