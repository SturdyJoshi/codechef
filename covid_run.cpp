#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n, k, x, y, temp;
        cin>>n>>k>>x>>y;
        temp =n*1000;

        if(k == 0)
        {
            if(x == y)
                cout<<"YES"<<endl;
            
            else
            {
                cout<<"NO"<<endl;
            }
        }

        else
        {    
            int flag =0;
            while(temp--)
            {
                if(x == y)
                {
                    cout<<"YES"<<endl;
                    flag =1;
                    break;
                }

                x = (x + k)%n;
                
            }

        if(flag ==0)
            cout<<"NO"<<endl;
        }
    }
}