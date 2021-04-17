#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int c, r, c_rem, c_quo, r_rem, r_quo, c_value, r_value;
        cin>>c>>r;

        c_rem = c%9;
        r_rem = r%9;

        c_quo = c/9;
        r_quo = r/9;

        c_value = c_quo;
        if(c_rem != 0)
            c_value++;

        r_value = r_quo;
        if(r_rem != 0)
            r_value++;

        if(c_value < r_value)
        {
            cout<<0<<" "<<c_value<<endl;
        }

        else
        {
            cout<<1<<" "<<r_value<<endl;
        }

    }
}