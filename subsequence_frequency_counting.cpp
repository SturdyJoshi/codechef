#include <bits/stdc++.h> 
using namespace std; 
 
void printSubSeqRec(string str, int n, vector<string> &sub_str, 
		int index = -1, string curr = "") 
{ 
	// base case 
	if (index == n) 
		return; 

	sub_str.push_back(curr); 
	for (int i = index + 1; i < n; i++) { 

		curr += str[i]; 
		printSubSeqRec(str, n, i, curr); 
	
		// backtracking 
		curr = curr.erase(curr.size() - 1); 
	} 
	return; 
} 

void printSubSeq(string arr, vector<string>& str) 
{ 
	printSubSeqRec( arr, arr.size(), str); 
} 

// Driver code 
int main() 
{ 
	string arr;
    vector<string> str;
    cin>>arr;
	printSubSeq(arr, str); 
	return 0; 
} 
