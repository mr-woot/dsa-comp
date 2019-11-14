#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

void pv(vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

vector<int> prefix_sum(vector<int> a) {
    vector<int> pSum(a.size());
    pSum[0] = a[0];
    for (int i = 1; i < a.size(); i++)
        pSum[i] = pSum[i - 1] + a[i];
    
    return pSum;
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

    pv(prefix_sum(arr));
    // pv(pSum);

    return 0;
}