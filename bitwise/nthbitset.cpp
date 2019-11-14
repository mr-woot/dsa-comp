#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve(int &num, int pos)
{
    // Set bit at nth pos
    cout << num << "        : " << bitset<8>(num) << endl;
    cout << pos << " (shift): " << bitset<8>(1 << pos) << endl;
    cout       << "check    : " << (bool)(num & (1 << pos)) << endl;
}

int main() { _
    int n, pos;
    cin >> n;
    cin >> pos;
    solve(n, pos);
    // cout << (int)n << endl;
    return 0;
}