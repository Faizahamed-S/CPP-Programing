#include<bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    int flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr[i]=num;
    }
    int ans=isSorted(n,arr);
    cout<<ans;
}
