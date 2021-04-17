#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string st;
        cin>>st;

        int pair =0;
        for(int i=0; i<st.length();)
        {
            if(st[i] == 'x' && i+1 < st.length())
            {
                if(st[i+1] == 'y')
                {    
                    pair++;
                    i+=2;
                }
                else 
                    i++;
            }

            else if(st[i] == 'y' && i+1 < st.length())
            {
                if(st[i+1] == 'x')
                {
                    pair++;
                    i+=2;
                }
                else 
                    i++;
            }

            else 
                i++;
        }    
        cout<<pair<<endl;
    }
}