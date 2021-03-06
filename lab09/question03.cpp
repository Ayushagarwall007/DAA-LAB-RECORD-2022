// Given an array of elements. Assume arr[i] represents the size of file i. Write an algorithm and a program to merge all these files into single file with 
// minimum computation. For given two files A and B with sizes m and n, computation cost of merging them is O(men). (Hint: use greedy approach)

// Input Format:

// First line will take the size n of the array. Second line will take arrays an input.

// Output Format:

// Output will be the minimum computation cost required to merge all the elements of the array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    priority_queue<int,vector<int>,greater<int> >minheap;
    for(int i=0;i<n;i++)
    {
        minheap.push(a[i]);
    }
    int ans=0;
    while(minheap.size()>1)
    {
        int e1=minheap.top();
        minheap.pop();
        int e2=minheap.top();
        minheap.pop();
        ans+=e1+e2;
        minheap.push(e1+e2);
    }
    cout<<ans<<endl;
}
