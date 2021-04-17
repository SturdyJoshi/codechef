#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str, sub_str;
        cin>>str>>sub_str;
        
        unordered_map<char, int> original, pattern;
        for(size_t i=0; i<str.size(); i++)
        {
            original[str[i]]++;
        }

        
        for(size_t i=0; i<sub_str.size(); i++)
        {
            pattern[sub_str[i]]++;
        }

        unordered_map<char, int>:: iterator itr;
        for(itr= original.begin(); itr != original.end(); itr++)
        {
            if(pattern.find(itr->first) == pattern.end())
                continue;

            itr->second = itr->second - pattern[itr->first];
        }

        string semi_pattern= "";
        for(auto i: original)
        {
            for(int k=0; k<i.second; k++)
                semi_pattern+= i.first;
        }

        int j=0;
        sort(semi_pattern.begin(), semi_pattern.end());
        int len = semi_pattern.size();
        int order =0;
        for(int i=0; i<sub_str.size()-1; i++)
        {
            if(sub_str[i] == sub_str[i+1])
                continue;

            else if(sub_str[i] > sub_str[i+1])
            {
                break;
            }

            else 
            {
                order =1;
                break;
            }
        }
 
        if(order == 1)
            for(int i= semi_pattern.size()-1; i >=0; i--)
            {
                if(sub_str[0] >= semi_pattern[i])
                {
                    semi_pattern.insert(i+1, sub_str);
                    break;
                }
            }       

        else
        {
            for(int i=0; i<semi_pattern.size(); i++)
            {
                if(sub_str[0] <= semi_pattern[i])
                {
                    semi_pattern.insert(i, sub_str);
                    break;
                }
            }

        }
        
        
        if(len == semi_pattern.size())
        {
            if(semi_pattern[0] > sub_str[0])
                semi_pattern = sub_str + semi_pattern;

            else if(semi_pattern[len-1] < sub_str[0])
                semi_pattern = semi_pattern + sub_str;
        }    
        cout<<semi_pattern<<endl;
        
    }
}