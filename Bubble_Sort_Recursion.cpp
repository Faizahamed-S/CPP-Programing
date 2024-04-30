#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble_rec(int arr[], int n)
{
    if(n==1)
    return;
    
     for(int i=0;i<n-1;i++)
     {
         if(arr[i]>arr[i+1])
         {
             int temp=arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=temp;
         }
     }
     bubble_rec(arr,n-1);
}
int main()
{
 int n;
 cout<<"please enter the size of the array you want to perform bubble sort"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     int num;
     cin>>num;
     arr[i]=num;
 }
 bubble_rec(arr, n);
 
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }
}