#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	sort(arr.begin(),arr.end());
	auto itr=unique(arr.begin(),arr.end());
	arr.erase(itr,arr.end());
	return arr.size();
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
        arr[i]=num;
    }
    int ans=removeDuplicates(arr,n);
    cout<<ans;
}