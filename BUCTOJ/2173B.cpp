#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, s[105], m;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    register int t;
    for (int i = 1;i <= n;i++) {
        cin >> t;
        s[i] = s[i - 1] + t;
    }
    m = s[n];
    for (int i = 1;i <= n;i++) {
        m = min(m, abs(s[n] - s[i] * 2));
    }
    printf("%d\n", m);
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
