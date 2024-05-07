#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector <int> ans;
    sort(a.begin(),a.end());
    ans.push_back(a[n-2]);
    ans.push_back(a[1]);
    return ans;
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
    vector <int> ans=getSecondOrderElements(n,arr);
    cout<<ans[0]<<" "<<ans[1];
}

