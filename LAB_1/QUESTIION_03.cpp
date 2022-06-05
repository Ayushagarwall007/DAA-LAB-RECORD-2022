// // Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted
// array or not. For an array arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on. Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, 
// perform a linear search operation from the index 2k to find the element key. (Complexity < O(n), where n is the number of elements need to be scanned for searching):
// Jump Search
#include<iostream>
#include<math.h>
using namespace std;
int JumpSearch(int A[],int key,int n)
{
    int m=sqrt(n);
    int i=0;
    while(A[m]<=key && m<n)
    {
        i=m;
        m=m+sqrt(n);
        if(m>n-1)
            m=n;
    }
    for(int k=i;k<m;k++)
    {
        if(A[k]==key)
            return k;
    }
    return -1;
}
int main()
{
    int n,key;
     cout<<"enter the size of array:";
     cin>>n;
    int A[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++)
        cin>>A[i];
     cout<<"enter the key:";
     cin>>key;
     int c= JumpSearch(A,key,n);
     if(c==-1)
        cout<<" key not found";
     else
        cout<<"key found";
    return 0;
}
