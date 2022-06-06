// Given a knapsack of maximum capacity w. N items are provided, each having its own value and weight. You have to Design an algorithm and implement it using
//   a program to find the list of the selected items such that the final selected content has weight w and has maximum value. You can take fractions of items
//   ,i.e. the items can be broken into smaller pieces so that you have to carry only a fraction x of item i, where 0 sxs 1.
// Input Format:
// First input line will take number of items N which are provided. Second input line will contain N space-separated array containing weights of all N items.
//   Third input line will contain N space-separated array containing values of all N items. Last line of the input will take the maximum capacity w of
//   knapsack.
// Output Format: First output line will give maximum value that can be achieved.
// Next Line of output will give list of items selected along with their fraction of amount which has been taken


#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b)
    {
        double i1=a.first/a.second;
        double i2=b.first/b.second;
        return i1>i2;
    }
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>item;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        item.push_back({x,y});
    }
    int k;
    cin>>k;
    sort(item.begin(),item.end(),compare);
    double profit =0.0;
    for(int i=0;i<n;i++)
    {
        if(k>=item[i].second)
        {
            k-=item[i].second;
            profit+=item[i].first;

        }
        else
        {
            profit+=double(item[i].first)/(item[i].second*k);
            break;
        }
    }
    cout<<profit;
    return 0;
}
