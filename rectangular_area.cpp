#include<bits/stdc++.h>
using namespace std;
int main()
{
   int size;
    cin>>size;
   int max =0, pointer;
   int x[size], y[size];
   for(int i=0; i<size; i++)
   {
       cin>>x[i];
       if(x[i] > max)
        {
            max = x[i];
            pointer = i;
        }
       cin>>y[i];
   } 
   vector<int> height;
   for(int i=0; i<size; i++)
   {    
        if(height[x[i]/2] < y[i])
            height[x[i]/2] = y[i];
   }
    int ans= 0;
    int previous = height[max];
   for(int i = max; i>=0; i--)
   {
       if(previous > height[i])
       {
            ans = ans + previous;          
       }
       else
       {
           ans = ans + height[i];
           previous = height[i];
       }
       
   }

    cout<< ans<< endl;

}