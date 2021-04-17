#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {   
        int size_string, query_count;
        char first_char;
        cin>>size_string>>query_count;

        string quote;
        cin>>quote;

        map <char, int> Map; 
        
        for(int i=0; i<quote.size(); i++)
        {
            Map[quote[i]] +=1; 
        }

        // cout<<"frequency is printing"<<endl;
            for(auto i: Map)
            {
                first_char = i.first;
                break;
            }
        for(int i=0; i<query_count ;i++)
        {   
            int n;
            int sum = 0;
            cin>>n;                         //enter the number of isolation centre. 
        
            char c = 'a', count =0;
            // cout<<quote[n]<<endl;

            // char first_ch= Map[].first;
           
                while(c <= 'z')
                {
                    if(Map.count(c)==1 && Map[c]>n)
                    {
                        sum+= Map[c] -n;
                        // cout<<"sum :"<<sum<<endl;
                        
                        //   cout<<"h";                       
                    }
                    c++;
                }

        cout<<sum<<endl;

        }

        
    }
}



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//  	int n;
//     cin>>n;
//     int i= INT_MAX;
//     int arr[n]; 
    
//     for(int i=0; i<n; i++)
//         cin>>arr[i];
    
//     int k=0,l=1,t=1;
//  	map<int, int > time;
//     for(int i=0; i<n; i++)
//     {
//         if((arr[i]-i)%n == 0)
//             t = (arr[i]- i)/n;
        
//         else 
//             t = (arr[i] - i)/n +1;
        
//         time[t]=i;
//     }
    
    
    
// 	return 0;
// }
