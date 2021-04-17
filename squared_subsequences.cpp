#include<bits/stdc++.h>
using namespace std;


int  give_ans(int n)
{   int arr[n],count=0;
    unsigned int temp;
    for(int i=0;i<n;i++)
        {   
            scanf("%u",&temp);
            arr[i]=temp%4;   
        }

    for(int i=0;i<n;i++)
    {   int pro=1;
        for(int j=i;j<n;j++)
        {    
            pro=((pro%4)*(arr[j]%4))%4;
            count=(pro%4!=2)?count+1:count;
        } 
    }

    return count;
}
int main()
{
    int n,count=0,t;
    scanf("%d",&t);
    while(t--)
        {   int x=0;
            cin>>n;
            x= give_ans(n);
            printf("%d\n",x);
        }     
}