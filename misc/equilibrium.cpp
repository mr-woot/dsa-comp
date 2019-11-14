#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

void pv(vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int equilibrium_index(vector<int> arr) {
    int len = arr.size();
    int total_sum = 0;
    for (int i = 0; i < len; i++) {
        total_sum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < len; i++) {
        total_sum -= arr[i];
        if (leftSum == total_sum) {
            return i + 1;
        }
        leftSum += arr[i];
    }
    return -1;
}

int main() { _
    int n;
    cin >> n;
    vector<int> arr;
    
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        arr.push_back(el);
    }

    cout << equilibrium_index(arr);

    return 0;
}