#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
    {return a<b;}
bool compare1(int a, int b)
    {return a>b;}
int get_ans(int a, int b, int c, int p, int q, int r)
{
    int diff_a = p-a;
    int diff_b = q-b;
    int diff_c = r-c;
    int rem_a = p%a;
    int rem_b = q%b;
    int rem_c = r%c;
    int q_a = p/a;
    int q_b = q/b;
    int q_c = r/c;
    if(p == a && q == b && r == c)
        return 0;

    if((diff_a == diff_b && diff_b == diff_c) || (rem_a == rem_b && rem_b == rem_c) && q_a == q_b && q_b == q_c)
        return 1;

    if(abs(diff_a + diff_b + diff_c ) == abs(diff_a - diff_b - diff_c ))
        return 1;

    if(((diff_a == diff_b) && diff_c ==0) || ((diff_b == diff_c) && diff_a ==0) || ((diff_c == diff_a) && diff_b ==0))
        return 1;

    if((diff_a == 0 && rem_b == rem_c && q_b == q_c) || (diff_b == 0 && rem_c == rem_a && q_c == q_a) || (diff_c == 0 && rem_a == rem_b && q_a == q_b))
        return 1;

    if(diff_a == 0 || diff_b ==0 || diff_c ==0)
        return 2;
    
    if(diff_a == diff_b || diff_b == diff_c || diff_c == diff_a)
        return 2;

    if((rem_a == rem_b)&&(q_a == q_b) || (rem_b == rem_c)&&(q_b == q_c) || (rem_c == rem_a)&&(q_c == q_a))
        return 2;

    int temp = min({diff_a, diff_b, diff_c}, compare1);
    int temp1 = p-temp;
    int temp2 = q-temp;
    int temp3 = r-temp;
    if((temp1%a == temp2%b )&& (temp2%b == temp3%c))
        return 2;
    
    temp1 = a+ temp;
    temp2 = b+ temp;
    temp3 = c+ temp;
    if((p%temp1 == q%temp2)&& (q%temp2 == r%temp3))
        return 2;

    if(rem_a ==0)
    {
        if((r - c*q_c) == (q - b*q_c))
            return 2;
    
        if((q/q_c - b) == (r/q_c - c))
            return 2;
    }
    if(rem_b ==0)
    {
        if((p - a*q_c) == (r - c*q_c))
            return 2;

        if((p/q_c - a) == (r/q_c - c))
            return 2;
    }

    if(rem_c ==0)
    {
        if((p - a*q_c) == (q - b*q_c))
            return 2;
        
        if((q/q_c - b) == (p/q_c - a))
            return 2;
    }

    temp = min({q_a, q_b, q_c}, compare1);
    while(temp >0)
    {
        if(p%temp == q%temp && q%temp == r%temp)
        {
            if((p/temp -a == q/temp -b) && (q/temp -b == r/temp -c))
                return 2;
        }

        temp--;
    }

    temp = max({q_a, q_b, q_c}, compare);
    while(temp > 0)
    {
        if((a*temp -p == b*temp -q) && (b*temp -q == c*temp -r))
        {
            return 2;
        }
        temp--;
    }

    return 3;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,p,q,r;
        cin>>p>>q>>r>>a>>b>>c;
        int count = (a == 0) + (b == 0) + (c == 0);
        
        if(a>0 && b>0 && c>0 && p>0 && q>0 &&r>0)
            cout<<get_ans(a,b,c,p,q,r)<<endl;

        
        
        
    }
    qwe
}