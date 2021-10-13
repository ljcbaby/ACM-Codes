#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, k, a[45], m, ans;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> t;
    for (;t > 0;t--) {
        cin >> k;
        m = 1e6;
        ans = 0;
        for (int i = 0;i < k;i++) {
            cin >> a[i];
            m = min(a[i], m);
        }
        register int i;
        for (i = 0;!ans && i < k;i++)
            ans = a[i] - m;
        for (;i < k && ans != 1;i++)
            if (a[i] - m)
                ans = __gcd(a[i] - m, ans);
        printf("%lld\n", ans ? ans : (ll)-1);
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
