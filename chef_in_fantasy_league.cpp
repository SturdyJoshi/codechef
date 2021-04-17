#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int zero_array[100],one_array[100],s=0,t1=0;
            memset(zero_array,-1,100);
            memset(one_array,-1,100);
    cin>>t;
    while(t--)
    {  
        int arr[101];
        int n,sum;
        cin>>n;
        cin>>sum;               //made by neeraj joshi
        int temp,temp1;
        for(int i=0;i<n;i++)
          { 
               
               cin>>arr[i];
          }

          for(int i=0;i<n;i++)
          { 
               cin>>temp1;
               if(temp1==0)
                    zero_array[s++]=arr[i];

                else
                    one_array[t1++]=arr[i];
          } 
          
            
                   int x=*min_element(one_array, one_array + t);
                    int y= *min_element(zero_array, zero_array +s);

                if(x+y+sum<=100 && one_array[0]>=0 && zero_array[0]>=0)
                   { cout<<"yes"<<endl;
                }
                      else 
                    cout<<"no"<<endl;
    }
}