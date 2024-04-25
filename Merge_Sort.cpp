#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector <int> ar;

void merge(vector<int>& ar,int low, int mid, int high)
{
    vector <int> temp;
    int left=low;
    int right=mid+1;
    while(low<=mid && right <=high)
    {
        if(ar[left]<=ar[right])
        {
        temp.push_back(ar[left]);
        left++;
        }
        else
        {
            temp.push_back(ar[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(ar[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(ar[right]);
        right++;
    }
    
    for(int i=0;i<temp.size();i++)
    {
        ar[low+i]=temp[i];
    }
}

void mergesort(vector <int>& ar, int low, int high)
{
   if(low>=high)return;

   int mid=(low+high)/2;
   mergesort(ar,low,mid);
   mergesort(ar,mid+1,high);
   merge(ar,low,mid,high);
}

int main()
{
    cout<<"whats the size of the array you want me to apply merge sort"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        ar.push_back(num);
    }
    mergesort(ar, 0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}