#include<unordered_map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<map>
using namespace std;

int main()
{
    int ar[] = {3,7,2,1,9,8,1};
    unordered_map<int, int> elementToIndex;
    unordered_map<int, bool> visitedElements;

    for(int i=0; i<7; i++)
    {
        elementToIndex[ar[i]] = i;

        if(visitedElements.count(ar[i])==0)
        visitedElements[ar[i]] = true;
    }

    // for(auto i: elementToIndex)
    // cout<<i.first<<" "<<i.second<<endl;
    
    // cout<<"visited"<<endl;

    // for(auto i: visitedElements)
    // cout<<i.first<<" "<<i.second<<endl;

    vector<int > longestSequence;
    int maxSequenceLength = 1;
    int maxSequenceIndex = 0;

    for(int i=0; i<7; i++)
    {
        int num = ar[i];
        int currentMinStartIndex= i;
        int count = 0;
        int tempNum = num;

        while(visitedElements.count(tempNum)==0 && visitedElements[tempNum]== true)
        {
            visitedElements[tempNum] = false;
            count++; 
            tempNum++;
        } 
        tempNum = num-1;
        while(visitedElements.count(tempNum) == 1 && visitedElements[tempNum] == true)
        {
            visitedElements[tempNum] = false;
            count++;
            tempNum--;
        }

        if(count > maxSequenceLength)
        {
            maxSequenceLength = count;
            maxSequenceIndex  = currentMinStartIndex;
        }
        else if(count == maxSequenceLength)
        {
            if(currentMinStartIndex < maxSequenceIndex)
            {
                maxSequenceIndex = currentMinStartIndex;
            }
        }
    }
    int globalStartNum =    ar[maxSequenceIndex];

    longestSequence.push_back(globalStartNum);
    maxSequenceLength--;

    while( maxSequenceLength!=0)
    {
        globalStartNum++;
        longestSequence.push_back(globalStartNum);
        maxSequenceLength--;
    }
    return longestSequence ;
}
