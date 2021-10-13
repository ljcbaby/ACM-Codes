#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int t, n, k, ans, sum, a[400005];

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> t;
    register int tmp;
    for (;t > 0;t--) {
        cin >> n >> k;
        for (int i = 0;i < k;i++) {
            cin >> tmp;
            a[i] = n - tmp;
        }
        sort(a, a + k);
        sum = 0;
        for (ans = 0;ans < k;ans++) {
            sum += a[ans];
            if (sum >= n) {
                break;
            }
        }
        printf("%d\n", ans);
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
