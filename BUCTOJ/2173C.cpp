#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
ll a[100005];

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n >> m;
    register int t;
    a[0] = 1;a[1] = 1;
    for (;m > 0;m--) {
        cin >> t;
        a[t] = -1;
    }
    for (t = 2;t <= n;t++)
        if (!a[t])
            a[t] = ((a[t - 1] == -1 ? 0 : a[t - 1]) + (a[t - 2] == -1 ? 0 : a[t - 2])) % (ll)(1e9 + 7);
    printf("%lld\n", a[n]);
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
