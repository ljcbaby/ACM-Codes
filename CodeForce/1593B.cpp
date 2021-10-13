#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int n, len;
string s;
int f1, f2, ans;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (;n > 0;n--) {
        cin >> s;
        len = s.length();
        f1 = f2 = 0;
        for (int t = len - 1;t >= 0;t--) {
            if ((s[t] == '0' || s[t] == '5') && f1) {
                ans = len - t - 2;
                break;
            }
            if ((s[t] == '2' || s[t] == '7') && f2) {
                ans = len - t - 2;
                break;
            }
            if (s[t] == '0') {
                f1 = t;
                continue;
            }
            if (s[t] == '5') {
                f2 = t;
                continue;
            }
        }
        printf("%d\n", ans);
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
