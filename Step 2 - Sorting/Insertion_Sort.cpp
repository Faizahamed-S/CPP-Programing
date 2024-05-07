#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector <int> insertion(vector <int> ar, int n)
{
  for(int i=1;i<n;i++)
  {
      int key=ar[i];
      int j=i-1;
    while(j>=0 && ar[j]>key)
    {
        ar[j+1]=ar[j];
        j--;
    }
    ar[j+1]=key;
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
   ar=insertion(ar,n);
   for(int i=0;i<n;i++)
   {
    cout<<ar[i]<<" ";
   }
}