
#include <bits/stdc++.h> 

using namespace std; 

void combinationUtil_k(int arr[], int n, int r,  

                    int index, int data[], int i, int &ans);  

void printCombination_k(int arr[], int n, int r , int &ans)  
{  

    int data[r];  
    combinationUtil_k(arr, n, r, 0, data, 0, ans);  
}  


void combinationUtil_k(int arr[], int n, int r,  

                    int index, int data[], int i, int &ans)  
{  


    if (index == r)  

    {  
        int max1 = INT_MIN;

        for (int j = 0; j < r; j++)  
            max1 = max(max1, data[j]);
              
        ans = (max1 + ans)%1000000007;
        return;  

    }  

  


    if (i >= n)  

        return;  
    data[index] = arr[i];  

    combinationUtil_k(arr, n, r, index + 1, data, i + 1, ans);  

  


    combinationUtil_k(arr, n, r, index, data, i+1, ans);  
}  

  

int main()  
{  

    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    int ans =0;
    printCombination_k(arr, n, k, ans);  
    cout<<ans<<endl;
    return 0;  
}  
