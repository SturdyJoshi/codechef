    #include<bits/stdc++.h>
    using namespace std;

    int arrangements(vector<int>& arr1, vector<int>& arr2, int table_used, int* argue, int i, int n, int argue_sum)
    {
        //int final_ans =0;
        if(i >= n||arr1.size() ==0)
        {   
            return (argue_sum + table_used);
        }
        
        vector<int> :: iterator itr;
        itr = find(arr2.begin(), arr2.end(), arr1[i]);
        
        if(itr == arr2.end())
        {
            arr2.push_back(arr1[i]);
            return arrangements(arr1, arr2, table_used, argue, i+1, n, argue_sum);
            // return arrangements(arr1, arr2, table_used, argue, i+1, n);
        }

        else
        {
            int temp11= 0;
            arr1[i] = temp11;
            arr2.push_back(arr1[i]);
            int ans1= 0;
            if(argue[arr1[i]] == 0)
            {
                argue[arr1[i]] = 1;
                ans1 = arrangements(arr1, arr2, table_used, argue, i+1, n, argue_sum + 2);
            }    
            
            else
            {
                ans1= arrangements(arr1, arr2, table_used, argue, i+1, n, argue_sum+1);
            }
            arr2.pop_back();
            int ans2= 0;
            arr2.clear();
            arr2.push_back(temp11);
            ans2 = arrangements(arr1, arr2, table_used + 1, argue, i+1, n, argue_sum);
            return min(ans1, ans2);    
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
            
            vector<int>  arr2(n), arr1(n);
            
            for(int i=0; i<n; i++)
            {
                cin>>arr1[i];
            }

            int table_used =1, i=0;
            int *argue = new int[n];
            for(int i=0; i<n; i++)
                argue[i] =0;
            
            int argue_sum =0;
            cout<<arrangements(arr1, arr2, table_used, argue, i, n, argue_sum)<<endl;
            delete[] argue;
        }
        return 0;
    }