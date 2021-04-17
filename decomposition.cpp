#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n,a;
        cin>>n>>a;
        int ar[n][n];
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<-n;j++)
                ar[i][j]=a;
        }   

    }
}