#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, final_xor =0, sample, temp = 0;
        long long ans= 0;
        cin>>n;
        vector<int> arr1, arr2;
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
            vector<int> pair_arr1, pair_arr2;
            for(int i=0; i<n-1;)
            {
                if(arr1[i] == arr1[i+1])
                {
                    pair_arr1.push_back(arr1[i]);  // putting the pairs in another array
                    i+= 2;
                }

                else 
                    i++;
            }

            for(int i=0; i<n-1;)
            {
                if(arr2[i] == arr2[i+1])
                {
                    pair_arr2.push_back(arr2[i]);  // putting the pairs in another array
                    i+= 2;
                }

                else 
                    i++;
            }

            arr1.clear();
            arr2.clear();    
            vector<int>:: iterator it;
            for(int i=0; i< pair_arr1.size(); i++)
            {
                it = find(pair_arr2.begin(), pair_arr2.end(), pair_arr1[i]);
                if(it == pair_arr2.end())
                    continue;
                pair_arr1.erase(pair_arr1.begin() + i);
                pair_arr2.erase(it);
                i--;
            }

            int j = pair_arr1.size() -1;    
            for(int i=0; i<pair_arr1.size();)
            {
                ans+= min(pair_arr1[i++], pair_arr2[j--]);
            }
            cout<<ans<<endl;
        }
        
    }
}