#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

vector<int> rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // Normalize k to be within the bounds of n

    reverse(arr, 0, k - 1);          // Reverse the first k elements
    reverse(arr, k, n - 1);          // Reverse the remaining elements
    reverse(arr, 0, n - 1);          // Reverse the entire array

    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    arr = rotateArray(arr, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
