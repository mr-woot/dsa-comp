#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve(int &num, int pos)
{
    // Set bit at nth pos
    cout << bitset<8>(1 << pos) << endl;
    cout << bitset<8>(~(1 << pos)) << endl;
    num &= (~(1 << pos));
    cout << bitset<8>(num) << endl;
}

int main() { _
    int n, pos;
    cin >> n;
    cin >> pos;
    solve(n, pos);
    cout << n << endl;
    return 0;
}