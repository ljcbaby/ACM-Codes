#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int t;

string s = "1001010111001010";

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> t;
    cout << s[t - 1];
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
