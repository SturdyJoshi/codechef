#include<bits/stdc++.h>
using namespace std;
string get_ans(int *ar, int n)
{
    int chef_change_5 = 0;
    int chef_change_10 = 0;
    for(int i=0; i<n; i++)
    {
        if(ar[i] == 5)
            chef_change_5++;

        else if(ar[i] == 10)
        {
            chef_change_5 --;
            chef_change_10 ++;
        }    

        else
        {
            if(chef_change_10 > 0)
                chef_change_10--;

            else 
                chef_change_5-= 2;
        }
        
        if(chef_change_5 < 0)
            return "NO";    
    }
    return "YES";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *ar = new int[n];
        
        for(int i=0; i<n; i++)
            cin>>ar[i];

        cout<<get_ans(ar, n)<<endl;
        delete [] ar;
    }
}