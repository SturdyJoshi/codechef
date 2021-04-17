#include<bits/stdc++.h>
using namespace std;

struct nodee
{
    int value;
    int freq;
};
bool comparee(nodee a, nodee b)
{
    return false;
}
int count_max_frequency(int temp, vector<nodee>& node, int i)
{
    vector<nodee> :: iterator it;
    it = find(node.begin(), node.end(), temp);
    if(it == node.end())
    {
        node.push_back({temp, 1});
    }
    
    else
    {
        node[it - node.begin()].freq = 1;  
    }
    
    // sort(node.begin(), node.end(), comparee);
    return 1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<nodee> node;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        cout<<count_max_frequency(temp, node, i)<<endl;
    }
    
    
    return 0;
}
