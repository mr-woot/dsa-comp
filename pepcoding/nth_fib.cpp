#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int nth_fib(int n) {
    int a = 0;
    int b = 1;
    int c;

    for (int i = 2; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() { _
    int n;
    cin >> n;
    cout << nth_fib(n) << endl;
    return 0;
}