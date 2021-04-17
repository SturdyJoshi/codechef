#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int n;
    cin>>n;   //size of the array
    int i= INT_MAX;
    int arr[n]; 
    
    for(int i=0; i<n; i++)
        cin>>arr[i];  // taking the input
    
    int k=0,l=1,m=1;
 multimap<int, int > time;
    
    for(int i=0; i<n; i++)
    {	int t=0;
        if((arr[i]-i)%n == 0)
            t = (arr[i]- i)/n;
        
        else 
           {
            	if(arr[i]- i <0)
                    t=0;
            	else 
                    t = ((arr[i] - i)/n) +1;
           }
        // cout<<t<<endl;
        time.insert({t,i});
    }
    int x=time.begin()->second;
    cout<<x+1<<endl;
    
    // for(auto i: time)
    //     cout<<i.first<<" "<<i.second<<endl;
    
    
	return 0;
}
