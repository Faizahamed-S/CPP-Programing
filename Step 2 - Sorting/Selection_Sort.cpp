#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector <int> selection(vector <int> ar, int n)
{
  for(int i=0;i<n-1;i++)
  {
  int min=i;
    for(int j=1+i;j<n;j++)
    {
        if(ar[min]>ar[j])
        {
        min=j;
        }
    }
    swap(ar[i],ar[min]);
  }
  return ar;
}
int main()
{
   cout<<"Enter the size of the array you need want to sort"<<endl;
   int n;
   cin>>n;
   vector <int> ar;
   for(int i=0;i<n;i++)
   {
    int num;
    cin>>num;
    ar.push_back(num);
   } 
   ar=selection(ar,n);
   for(int i=0;i<n;i++)
   {
    cout<<ar[i]<<" ";
   }
}