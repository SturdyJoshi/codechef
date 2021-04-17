#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a=0, b=0, x, y, n, x_ans, y_ans;
        cin>>n;
        // cin>>a>>b;
        for(int i=0; i< 4*n-1; i++)
        {
            cin>>x>>y;
            
            x_ans = a^x;
            y_ans = b^y;
            a = x_ans;
            b = y_ans;
        }        
        cout<<x_ans<<" "<<y_ans<<endl;
    }
}