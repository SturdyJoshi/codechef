#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// #include "solution.h"

void PairSum(int *input, int n) 
    {	 
    	vector<	pair <int, int>> PAIR;
		sort(input,input+n);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
				if(input[i]+input[j]==0)
                {
                    // PAIR.insert(input[i],input[j]);
                    PAIR.emplace_back(input[i],input[j]);
                    
                }
                    
            }
        
        }
     	
        for(auto i: PAIR)
            cout<<i.first<<" " <<i.second<<endl;
     	
 	}



int main()
{
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    PairSum(arr, n);
    return 0;
}


 	
	