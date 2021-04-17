#include<bits/stdc++.h>
using namespace std;
// int tempp = 0;
void Merge(int A[],int l,int mid,int h , multimap<int , int> robot, int &temp)
{
    int i=l,j=mid+1,k=l;
    int B[100];
    static int count =0;

     while(i<=mid && j<=h)
     {  
        if(A[i]<A[j])
            B[k++]=A[i++];
    
        else
        {   
            multimap<int , int> :: iterator it1 , it2;
            it1 = robot.find(j+1);
            it2 = robot.find(k+1);
            int x = it1->second;
            int y = it2->second;

            int count =0;
            while(it1->first == j+1 && it1 != robot.end())
            {
                if(it1->second == k+1)
                {  
                    count++ ;
                    
                }
                it1++;
             }
             while(it2->first == k+1 && it2 != robot.end())
             {
                 if(it2->second == j+1)
                 {
                     count ++;
                 }
                 it2++;
             }

            if(count != 0)
                B[k++]=A[j++];
             
             else 
             {
                //  cout<<it1->first <<"="<<it1->second<<endl;
                //  cout<<it2->first <<"="<<it2->second<<endl;
                //  cout<<"temp ";
                 temp++;
                 B[k++]=A[j++];
             }
             
        }   
            
     }
     
 for(;i<=mid;i++)
    B[k++]=A[i];
 
 for(;j<=h;j++)
    B[k++]=A[j];

 for(i=l;i<=h;i++)
     A[i]=B[i];
     
}

void IMergeSort(int A[],int n , multimap<int , int > robot)
{
    int temp =0;
    int p,l,h,mid,i;

    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<=n;i=i+p)
        {

             l=i;
             h=i+p-1;
             mid=(l+h)/2;
             Merge(A,l,mid,h, robot , temp);
        }
    }
    
    if(p/2<n)
        Merge(A,0,p/2-1,n, robot, temp);
    
    cout<<temp<<endl;
    
 }
                                        
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        multimap<int , int > robot;
        int n,m;
        cin>>n>>m;
    
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
    
        for(int i=0; i<m; i++)
        {
            int x,y;
            cin>>x>>y;
            robot.insert({x,y});
        }
        IMergeSort(arr,n, robot);
    
    }
}