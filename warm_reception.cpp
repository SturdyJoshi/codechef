#include<bits/stdc++.h>
using namespace std;
class chair
{
	public:
    int st_time;
    int dept_time;
    
    bool operator < (const chair& rhs)
    
    const{
		return st_time<rhs.st_time;
    }
};                               //find the minimum number of chair required at any interval of time so that noboody stands 
int main() {
	
    int n=3;
    multiset<chair> time;
    cin>>n;
    chair c[n];
    
    for(int i=0;i<n;i++)
        cin>>c[i].st_time;
	
    for(int i=0;i<n;i++)
        cin>>c[i].dept_time;
    

    for(auto i: c)
    time.insert(i);
    // cout<<endl;
    
    // for(auto i: time)
    //     cout<<i.st_time<<" "<<i.dept_time<<endl;
    
 int arr[n];
 int dept[n];
        int k=0;
       for(auto i: time)
        {
            arr[k]=i.st_time;
            dept[k++]=i.dept_time;
        }

    
        int count[n];
        memset(count,0,sizeof(count));
       

        for(int i=0;i<n;i++)
        { 
              for(int j=0;j<i;j++)
            {   
                if(dept[j]>arr[i])
                    {
                        count[i]++;
                        //  cout<<"i= "<<i<<" "<<"j=  "<<j;
                    }
                    
            }
            //  cout<<endl;
        
        }
       
         sort(count,count+n,greater<int>());
         cout<<count[0]+1<<endl;
}