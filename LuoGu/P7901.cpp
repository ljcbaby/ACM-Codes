#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll n, k, x, y;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n >> k >> x >> y;
    printf("%llu\n", k / (4 * n * n));
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
