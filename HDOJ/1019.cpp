#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    ll n;
    cin >> n;
    while (cin >> n) {
        ll t, ans = 1;
        for (int i = 0; i < n; i++) {
            cin >> t;
            ans = ans * t / __gcd(ans, t);
        }
        cout << ans << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}