#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    ll n[55];
    memset(n, 0, sizeof(n));
    n[0] = 0;
    n[1] = 3;
    n[2] = 6;
    n[3] = 6;
    for (int i = 4; i <= 50; i++)
        n[i] = n[i - 1] + 2 * n[i - 2];
    int t;
    while (~scanf("%d", &t))
        printf("%llu\n", n[t]);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
