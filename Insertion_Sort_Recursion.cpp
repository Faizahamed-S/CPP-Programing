#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void insertion_rec(int arr[], int i, int n)
{
    if(i==n)
    return ;
    
    int j=i;
    while(j>0 && arr[j-1]>arr[j])
    {
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertion_rec(arr,i+1,n);
}

int main()
{
    int n;
    cout<<"Enter the size of the array you want to sort "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr[i]=num;
    }
    insertion_rec(arr,0,n);
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
}