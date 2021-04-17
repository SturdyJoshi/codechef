#include<bits/stdc++.h>
using namespace std;

int before(vector<char> arr, int start, int end)
{
    
}

int end(vector<char> arr, int start, int end)
{

}

int main()
{
    int t, i=0;
    cin>>t;

    while(t--)
    {
        int n, k, ans=0;
        cin>>n>>k;
        vector<char> arr(n);
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
    
        while(n--)
        {
            int count=0;
            int power = k +1;
            if(arr[i] == 'M')
            {
                count = before(arr, i, n);
                count+= after(arr, i, n);
            }
            i++;
            if(count > ans)
                ans = count;
        }
        cout<<ans<<endl;
    }
}