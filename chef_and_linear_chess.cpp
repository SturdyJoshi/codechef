#include<bits/stdc++.h>
using namespace std;

int result(int k, vector<int>& arr)
{

    sort(arr.begin(), arr.end(), greater<int>());
    for(size_t i=0; i<arr.size(); i++)
    {
        if(k% arr[i] == 0)
            return arr[i];
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);

        for(size_t i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cout<<result(k, arr)<<endl;
    }
}