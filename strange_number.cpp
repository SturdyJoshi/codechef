#include <bits/stdc++.h> 
using namespace std; 

int  primeFactors(int n) 
{  int count =0;
	while (n % 2 == 0) 
	{ 
		// cout << 2 << " "; 
		n = n/2; 
		count ++;
	} 
	for (int i = 3; i <= sqrt(n); i = i + 2) 
	{ 
		while (n % i == 0) 
		{ 
            count++; 
			n = n/i; 
		} 
	} 

	if (n > 2) 
		count++;

        return count; 
} 


int main() 
{ 
	int x,k,t;
	cin>>t;
	while(t--)
    {
		cin>>x>>k;
    	 
		cout<<(k<=primeFactors(x))?1:0; 
		 cout<<endl;
    }
	return 0; 
} 



