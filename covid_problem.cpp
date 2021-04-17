#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    
     cin>>t;
     while(t--)
     {
         vector <int> covid;
        cin>>n;
        // if(n<6)
        //     cout<<"No\n";
    
        // else
        // {
               int ar[n];
            for(int i=0;i<n;i++)
            {
                cin>>ar[i];
                if(ar[i]==1)
                    covid.push_back(i);
            }
            if(covid.size()==1)
                cout<<"Yes";
                else{
                    string ans="Yes";
                    for(int i=1;i<covid.size();i++)
                    {   
                        if(covid[i]-covid[i-1]<6)
                        {
                            ans="No";
                            break;
                        }
                    }
                cout<<ans;}
        // }
        
     }    
}