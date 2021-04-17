    #include<bits/stdc++.h>
    using namespace std;

    int arrangements(vector<int>& arr1, vector<int>& arr2, int table_used, int* argue, int i, int n, int ** matrix, int argue_sum)
    {
        //int final_ans =0;
        if(i >= n||arr1.size()==0)
        {
            if(matrix[table_used][argue_sum] != 0)
                return matrix[table_used][argue_sum];

            else
            {
                matrix[table_used][argue_sum] = table_used + argue_sum;
                return matrix[table_used][argue_sum];
            }
            
        }

        vector<int> :: iterator itr;
        itr = find(arr2.begin(), arr2.end(), arr1[i]);
        if(itr == arr2.end())
        {
            arr2.push_back(arr1[i]);
            if(matrix[table_used][argue_sum] != 0)
                return matrix[table_used][argue_sum];
            
            else
            {
                matrix[table_used][argue_sum] = arrangements(arr1, arr2, table_used, argue, i+1, n, matrix, argue_sum);
                return matrix[table_used][argue_sum];
            }
            
            // return arrangements(arr1, arr2, table_used, argue, i+1, n);
            

        }

        else
        {
            arr2.push_back(arr1[i]);
            int ans1= 0;
            if(argue[arr1[i]] == 0)
                ans1 = matrix(table_used, )
            if()
            // if(matrix[table_used +1][argue] != 0 && matrix[table_used][argue +1] != 0)
            //     return min(matrix[table_used +1][argue], matrix[table_used][argue +1]);
            
            else
            {
                matrix[table_used + 1][argue] = arrangements(arr1, arr2, table_used +1, argue, i+1, n, matrix);
                matrix[table_used][argue+1] = arrangements(arr1, arr2, table_used, argue+1, i+1, n, matrix);
                    return min(matrix[table_used +1][argue], matrix[table_used][argue +1]);
            }
            // return min(arrangements(arr1, arr2, table_used+1, argue, i+1, n), arrangements(arr1, arr2, table_used, argue+1, i+1, n));
            // arr1.erase(arr1.begin()+i);
        }

        return -1;
    }
    int main()
    {
        int t;
        cin>>t;

        while(t--)
        {
            int n;
            cin>>n;
            int k;
            cin>>k;
            vector<int>  arr2(n), arr1(n);
            
            int **matrix = new int*[2*n];
            for(int i=0; i<n; i++)
            {
                matrix[i] = new int[2*n];
                for(int j=0; j<2*n; j++)
                    matrix[i][j] = 0;
            }
            
            for(int i=0; i<n; i++)
            {
                cin>>arr1[i];
            }
            int table_used =1, i=0;
            int *argue = new int;
            for(int i=0; i<n; i++)
                argue[i] =0;
            int argue_sum =0;
            cout<<arrangements(arr1, arr2, table_used, argue, i, n, matrix, argue_sum)<<endl;
            for(int i=0; i<n; i++)
                delete[] matrix[i];

                delete[] matrix;
        }
        return 0;
    }