#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n, final_xor =0, sample, temp = 0;
        long long ans= 0;
        cin>>n;
        vector<long long> arr1, arr2;
        for(int i=0; i<n; i++)
        {
            cin>>sample;
            arr1.push_back(sample);
            final_xor = temp^arr1[i];            // checking the frequency of each no. is even or odd
            temp = final_xor;                    // from array1
        }

        for(int i=0; i<n; i++)
        {
            cin>>sample;                        // checking the frequency of each no. is even or odd
            arr2.push_back(sample);             // from array2
            final_xor = temp^arr2[i];
            temp = final_xor;
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        int equal =1;
        
        for(int i=0; i<n; i++)
        {
            if(arr1[i] != arr2[i])
            {                           // checking either both array  are identical or not
                equal = 0;
                break;
            }
        }
        // cout<<"final xor:   "<<final_xor<<endl;
        // cout<<"equal:   "<<equal<<endl;
        
        
        if(final_xor != 0)
            cout<<-1<<endl;             

        else if(equal == 1)
            cout<<0<<endl;

        else
        {
        
            map <long long, long long> ans1, ans2;          
            for(int i=0; i<n-1;)
            {
                if(arr1[i] == arr1[i+1])
                {
                    ans1[arr1[i]] += 1; 
                    i+=2;
                    continue;
                }
                i++;
            }

            for(int i=0; i<n-1;)
            {
                if(arr2[i] == arr2[i+1])
                {
                    ans2[arr2[i]] += 1; 
                    i+=2;
                    continue;
                }
                i++;
            }
            arr1.clear();
            arr2.clear();
            map<long long, long long> :: iterator it1, it2;
            vector<long long> last_arr1, last_arr2;
            for(it1 = ans1.begin(); it1 != ans1.end(); it1++)
            {
                it2 = ans2.find(it1->first);
                if(it2 == ans2.end())
                {
                    vector<long long> temp(it1-> second, it1->first);
                    last_arr1.insert(end(last_arr1), begin(temp), end(temp));
                }

                else
                {
                    if(it1->second - it2->second > 0)
                    {
                        vector<long long> temp(it1-> second - it2->second, it1->first);
                        last_arr1.insert(end(last_arr1), begin(temp), end(temp));
                    }
                }
                
            }

            for(it1 = ans2.begin(); it1 != ans2.end(); it1++)
            {
                it2 = ans1.find(it1->first);
                if(it2 == ans1.end())
                {
                    vector<long long> temp(it1-> second, it1->first);
                    last_arr2.insert(end(last_arr2), begin(temp), end(temp));
                }

                else
                {
                    if(it1->second - it2->second > 0)
                    {
                        vector<long long> temp(it1-> second - it2->second, it1->first);
                        last_arr2.insert(end(last_arr2), begin(temp), end(temp));
                    }
                }
                
            }
            cout<<"last array"<<endl;
            for(auto i: last_arr1)
                cout<<i<<" ";
            cout<<endl;

            for(auto i: last_arr2)
                cout<<i<<" ";

            int j = last_arr1.size() -1;    
            for(int i=0; i<last_arr1.size();)
            {
                ans+= min(last_arr1[i++], last_arr2[j--]);
            }
            cout<<ans<<endl;
        }
        
    }
}