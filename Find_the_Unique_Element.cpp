#include<bits/stdc++.h>
#include<iostream>
#include <algorithm>
using namespace std;

int FindUnique(int arr[], int size){

	map<int ,int> freq;
    for(int i=0;i<size;i++)
        freq[arr[i]]+=1;

        map<int,int> :: iterator it;
        for(it=freq.begin();it!=freq.end();it++)
            if(it->second==1)
            return it->first;
}



int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	FindUnique(input,size);
		
	return 0;
}
