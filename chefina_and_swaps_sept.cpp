#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll binary(ll n, ll sum, bool &ele_present)
{
    ll l= 0, r= n-1, ans=0;
    while(l<= r)
        {
            ll mid = l + (r-l)/2;
            if(((mid+1)*(mid+2))/2 == sum)
            {
                ans = mid;
                ans = ans+1;
                ele_present = true;
                return ans;
            }

            else if(((mid+1)*(mid+2))/2 > sum)
            {
                r = mid -1;
            }

            else
            {
                l = mid +1;
            }
            
        }

        if(((l+1)*(l+2))/2 < sum)
            l= l+1;

        return l;        

}

ll count_nice_swaps(ll n, ll sum)
{
    bool ele_present = false;
    ll ans = binary(n, sum, ele_present);
    ll final_ans =0;
    if(ele_present)
    {
        if(ans%2 ==0)
            final_ans = ((ans/2)*(ans-1)) + ((n- ans)*(n - ans -1))/2 + (n-ans);
        
        else
            final_ans = ans*((ans-1)/2) + ((n- ans)*(n - ans -1))/2 + (n-ans);
    }

    else
        final_ans = n- ans;
        
    return final_ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
        ll n, sum=0;
        cin>>n;

        
        if(n%2 ==0)
            sum = (n/2)*(n+1);
        else
            sum = n*((n+1)/2);
        
        
        if(sum %2 !=0)
            cout<<0<<"\n";

        else
        {
            cout<<count_nice_swaps(n, sum/2)<<"\n";
        }
         
    }
}