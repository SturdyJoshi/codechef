//  In a class there are ‘n’ number of students.
//  They have three different subjects: Data Structures, 
//  Algorithm Design & Analysis and Operating Systems.
//  Marks for each subject of all the students are provided to you.
//  You have to tell the position of each student in the class.
//  Print the names of each student according to their position in class.
//  Tie is broken on the basis of their roll numbers. Between two students having same marks, 
//  the one with less roll number will have higher rank. 
// The input is provided in order of roll number.

#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll_no;
    int total;
    string name;

    bool operator > (const Student& rhs)
    const{
                if(total==rhs.total)
                return roll_no > rhs.roll_no;
                
                else
                return total > rhs.total;
         }
};

int main()
{
    int n,ds,da,os;
    cin>>n;

    Student st[n];
    for(int i=0;i<n;i++)
    {
        cin>>st[i].name;
        cin>>ds;
        cin>>da;
        cin>>os;
        st[i].total=ds+da+os;
        st[i].roll_no=i+1;
    }

    multiset<Student,greater<> > records;
        for(auto i: st)
            records.insert(i);

        int k=0;
        for(auto i: records)
            cout<<++k<<" "<<i.name<<endl;
        // for(int i=0;i<n;i++)
        //     records.insert(st[i]);
}