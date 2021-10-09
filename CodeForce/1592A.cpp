#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
int t, n, h, res, x, m1, m2;
 
int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> t;
    for (;t > 0;t--) {
        cin >> n >> h;
        m1 = m2 = 0;
        for (;n > 0;n--) {
            cin >> x;
            if (x > m1) {
                m2 = m1;
                m1 = x;
            }
            else
                if (x > m2)
                    m2 = x;
        }
        res = h / (m1 + m2) * 2;
        h = h % (m1 + m2);
        if (h > m1)
            res += 2;
        else
            if (h > 0)
                res += 1;
        cout << res << endl;
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}