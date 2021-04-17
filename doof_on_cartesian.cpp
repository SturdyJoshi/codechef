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

        vector<int> arr;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);        
        }

        int points;
        cin>>points;
        int j=0;
        vector<pair<int, int>> pts;
        for(int i=0; i<points; i++)
        {
            int x, y;
            cin>>x>>y;
            pts[i].first = x;
            pts[i].second = y;
        }
        vector<int> :: iterator it;
        for(int i=0; i<points; i++)
        {
            if(pts[i].first == 0 && pts[i].second == 0)
                cout<<0;
            it = find(arr.begin(), arr.end(), pts[i].first + pts[i].second);
            if(it == arr.end())
                cout<<-1<<endl;

            else
            {
                int temp =(pts[i].first + pts[i].second)/2;
                
            }
            
        }

    }
}