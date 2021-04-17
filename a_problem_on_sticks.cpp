#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        set<int> arr;
        int temp;

        for(int i=0; i<n; i++)
        {
            cin>>temp;
            if(temp >0)
                arr.insert(temp);
        }

        cout<<arr.size()<<endl;
    }
}