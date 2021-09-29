#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll a, b, c, d, res, t, m, n, mt;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (;n > 0;n--) {
        res = 0;
        cin >> m >> a >> b >> c >> d;
        if (a < c) {
            t = a;a = c;c = t;
            t = b;b = d;d = t;
        }
        for (int i = 0;i <= m / a;i++) {
            t = b * i;
            mt = m - a * i;
            t += mt / c * d;
            res = max(res, t);
        }
        cout << res << endl;
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
