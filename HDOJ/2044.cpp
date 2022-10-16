#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int T;
    scanf("%d", &T);
    ll n[55];
    memset(n, 0, sizeof(n));
    n[0] = 1;
    n[1] = 1;
    for (int i = 2; i <= 50; i++)
        n[i] = n[i - 1] + n[i - 2];
    while (T--) {
        int a, b;
        scanf("%d %d\n", &a, &b);
        printf("%llu\n", n[b - a]);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
