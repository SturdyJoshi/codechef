#include <bits/stdc++.h> 

using namespace std; 

void combination_using_recursion(int arr[], int n, int k,int index, int data[], int i, int& ans);  


void sum_of_max_in_subarray(int arr[], int n, int k, int& ans)  
{  

    int sub_array[k];  

 

    combination_using_recursion(arr, n, k, 0, sub_array, 0, ans);  
}  


void combination_using_recursion(int arr[], int n, int k,  

                    int index, int sub_array[], int i, int& ans)  
{  


    if (index == k)  

    {  

        int max1 = INT_MIN;

        for (int j = 0; j < k; j++)  
            max1 = max(max1, sub_array[j]);
              
        ans = (max1 + ans)%1000000007;
        return;  


    }  

  

    if (i >= n)  

        return;  
    sub_array[index] = arr[i];  

    combination_using_recursion(arr, n, k, index + 1, sub_array, i + 1, ans);  


    combination_using_recursion(arr, n, k, index, sub_array, i+1, ans);  
}  

int main()  
{  

    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int ans=0;
    sum_of_max_in_subarray(arr, n, k, ans);
    cout<<ans<<endl;  
    return 0;  
}  
