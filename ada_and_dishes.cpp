#include<bits/stdc++.h>
using namespace  std;
bool check_sum(vector<int> ar, int sum, int n)
{
    bool dp[n+1][sum+1];
    
    for(int i=0; i<=sum; i++)
        dp[0][i] = false;

    for(int i=0; i<=n; i++)
        dp[i][0] = true;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=sum; j++)
        {
            if(ar[i-1] <= j)
            {
                dp[i][j] = dp[i-1][j] || dp[i-1][j - ar[i-1]];
            }

            else
            {
                dp[i][j] = dp[i-1][j];
            }
            
        }
    }

    return dp[n][sum];
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n ==1)
        {
            int a;
            cin>>a;
            cout<<a<<endl;
        }

        else if(n ==2)
        {
            int a,b;
            cin>>a>>b;
            cout<<(a>b ? a:b)<<endl;
        }


        else if(n ==3)
        {
            vector<int> ar(3);
            cin>>ar[0]>>ar[1]>>ar[2];

            sort(ar.begin(), ar.end());
            cout<<min(max(ar[0]+ar[2],ar[1]), max(ar[0]+ar[1], ar[2]))<<endl;
        }

        else
        {
            vector<int> ar(4);
            int sum=0;
            for(int i=0; i<4; i++)
            {
                cin>>ar[i];
                sum = sum + ar[i];
            }

            sort(ar.begin(), ar.end());
            if(sum %2 ==0)
                sum = sum/2;

            else
            {
                sum = sum/2 + 1;
            }
            

            while(true)
            {
                // cout<<"sum is"<<sum<<endl;
                if(check_sum(ar,sum,n))
                {
                    cout<<sum<<endl;
                    break;
                }

                sum++;
            }

        }
        
    }
}