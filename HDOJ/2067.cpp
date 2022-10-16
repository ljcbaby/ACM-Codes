#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll n[36][36];

ll dp(int x, int y) {
    if (y == 0)
        return 1;
    if (x == 0 || x < y)
        return 0;
    if (n[x][y])
        return n[x][y];
    return n[x][y] = dp(x - 1, y) + dp(x, y - 1);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int T = 0, t;
    while (scanf("%d", &t) && t != -1)
        printf("%d %d %llu\n", ++T, t, dp(t, t) * 2);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
