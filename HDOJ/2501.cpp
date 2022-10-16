#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    ll n[25];
    n[0] = 1;
    n[1] = 3;
    n[2] = 7;
    for (int i = 1; i < 25; i++)
        n[i] = 3 * n[i - 1] - 2 * n[i - 2];
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
