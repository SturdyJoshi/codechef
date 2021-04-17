#include<bits/stdc++.h>
using namespace std;

int main()
{
        int t;
        cin>>t;

        while(t--)
        {
            int n, total_cases =0;
            cin>>n;

            vector<int> v(n);
            for(int i=0; i<n; i++)
                cin>>v[i];

            int min =n, max =1;
            for(int i=0; i<n; i++)
            {
                total_cases=1;
                int smallest_v = v[i], greatest_v = v[i];

                for(int j= i+1; j<n; j++)
                {   
                    if(v[j] < v[i])
                        if(smallest_v > v[j])
                            smallest_v = v[j];
                }

                for(int k=0; k<i; k++)
                {
                    if(v[k] >smallest_v)
                        total_cases++;
                    
                    if(greatest_v < v[k])
                        greatest_v = v[k];
                }

                for(int j=i+1; j<n; j++)
                {
                    if(v[j] < greatest_v)
                        total_cases++;
                }

                if(max < total_cases)
                    max = total_cases;
                
                if(min > total_cases)
                    min = total_cases;
            }
            cout<< min<< " "<<max<<endl;
        }
}