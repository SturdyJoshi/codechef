#include<bits/stdc++.h>
using namespace std;

int main()
{   
    
    int t;
    cin>>t;
    while(t--)
    {
        multiset<int> infected_patients;
        int n;
        cin>>n;
        int ar[n+1];

        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int count=1;
         ar[n] =  INT_MAX;
        for(int i=1; i<=n; i++)
        {
            if(ar[i] - ar[i-1] <3 )
                ++count;

                else 
                {
                   infected_patients.insert(count);
                   count=1;    
                }

            // if(i== n-1)
            //     infected_patients.push_back(count);
        }
        cout<<*min_element(infected_patients.begin(), infected_patients.end())<<" "<<*max_element(infected_patients.begin(), infected_patients.end())<<endl;

    }
}