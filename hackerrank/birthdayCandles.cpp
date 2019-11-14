#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int birthdayCakeCandles(vector<int> ar) {
    int max = ar[0];
    int maxCount = 0;

    for (int i = 0; i < ar.size(); i++) {
        if (ar[i] > max) {
            max = ar[i];
            maxCount = 1;
        } else if (ar[i] == max) {
            maxCount++;
        }
    }
    return maxCount;
}

int main() { _
    // int n, pos;
    // cin >> n;
    // cin >> pos;
    int x[] = {18, 90, 90, 13, 90, 75, 90, 8, 90, 43};

    vector<int> v(x, x + sizeof x / sizeof x[0]);

    vector<int>::iterator itr = v.begin();
    for (; itr != v.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    cout << birthdayCakeCandles(v) << endl;
    return 0;
}