#include<iostream>
#include<vector>
#include<bitset>/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int main()
{
int n;
cin>>n;
vector <int> arr(n);
for(int i=0;i<n;i++)
{
    int num;
    cin>>num;
   arr.push_back(num);
}
int ans=largestElement(arr,n);
cout<<ans;
}