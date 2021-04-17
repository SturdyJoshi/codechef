#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    int sss;
    cin>>sss;
    cin>>s1>>s2;
    int size = s1.length();
    int i=0; 
    int cost = 0;
    while(i < size)
    {
        if(s1[i] != s2[i])
        {
            if(i+1 < size && s1[i+1] == s2[i] && s2[i] != s2[i+1])
            {
                i+=2;
                cost++;
            }

            else
            {
                i++; 
                cost++;
            }
        }
        
        else
        {
            i++;
        }
    }

    cout<<cost<<endl;
}