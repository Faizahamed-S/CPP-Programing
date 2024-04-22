#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> bubblesort(vector<int> ar,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(ar[j]>ar[j+1])
            swap(ar[j],ar[j+1]);
        }
    }
    return ar;
}
int main()
{
    cout<<"whats the size of the array you want to sort"<<endl;
    int n;
    cin>>n;
    vector <int>ar;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        ar.push_back(input);
    }
    ar=bubblesort(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}