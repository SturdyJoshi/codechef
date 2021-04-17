#include<bits/stdc++.h>
using namespace std;
const unsigned int x=1000000007;
unsigned int cal_profit(int n)
{
    int value[n];
    unsigned int profit=0;
    vector <int> price;
    for(int i=0;i<n;i++)
    {
        cin>>value[i];
        price.push_back(value[i]);
    }
        sort(price.begin(),price.end(),greater<int>());
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(price[i]>0&&price[i]>k)
            {
                profit=((profit%x)  +   (price[i]%x)    -   (k++%x)) %x;
            }
        }

        return profit;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {  
        vector <int> arr;
        cin>>n;
        cout<<cal_profit(n)<<endl;
    }    
}