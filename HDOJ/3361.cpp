#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int n, t;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (;n > 0;n--) {
        cin >> t;
        putchar(t);
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
