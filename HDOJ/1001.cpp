#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll n;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    while (1) {
        ll k = 0;
        for (ll i = 1;i <= n;i++)k += i;
        cout << k << endl << endl;
        if (!~scanf("%lld", &n))
            break;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}