#include<bits/stdc++.h>
using namespace std;
int who_wins(int h, int p)
{
    while(1)
    {
        h -= p;
        if(h<1)
            return 1;
        
        p/= 2;
        if(p< 1)
            return 0;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int h, p;
        cin>>h>>p;

        cout<<who_wins(h,p)<<endl;
    }
}