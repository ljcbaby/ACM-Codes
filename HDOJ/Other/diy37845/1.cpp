#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

unsigned long int n;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (cin >> n) {
        cout << (n >> 16) + (n << 16) << endl;
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
