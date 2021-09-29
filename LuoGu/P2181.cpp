#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll n, k;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    // k = n * (n - 3) / 2;
    // cout << k * (k - 1) / 2;
    cout << n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}