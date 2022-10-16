#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    ll n[35];
    n[0] = 1;
    n[1] = 3;
    for (int i = 2; i < 35; i++)
        n[i] = 2 * n[i - 1] + n[i - 2];
    int T;
    scanf("%d", &T);
    while (T--) {
        int t;
        scanf("%d", &t);
        printf("%llu\n", n[t]);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
