#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int gcd(int a, int b) {
    int n1, n2;
    if (a < b) {
        n1 = a;
        n2 = b;
    } else {
        n1 = b;
        n2 = a;
    }
    int rem = n2 % n1;
    while (rem != 0) {
        n1 = n1;
        n1 = rem;
        rem = n2 % n1;
    }

    return n1;
}

int main() { _
    int n1, n2;
    cin >> n1;
    cin >> n2;
    cout << gcd(n1, n2) << endl;

    return 0;
}