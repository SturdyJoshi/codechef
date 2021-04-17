#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        long long n, js;
        cin>>n;

        if(n % 2 == 0)
        while(n%2 ==0 && n > 0)
        {
            n/=2;
        }

        js = n/2;
        cout<<js<<endl;
    }    
}
