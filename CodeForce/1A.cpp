#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll n, m, a;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n >> m >> a;
    n = n / a + (n % a ? 1 : 0);
    m = m / a + (m % a ? 1 : 0);
    cout << m * n;
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
