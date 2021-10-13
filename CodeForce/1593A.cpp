#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int n, a, b, c, x, y, z;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (;n > 0;n--) {
        scanf("%d%d%d", &a, &b, &c);
        x = max(b, c) - a + 1;
        y = max(a, c) - b + 1;
        z = max(a, b) - c + 1;
        if (x < 0)x = 0;
        if (y < 0)y = 0;
        if (z < 0)z = 0;
        printf("%d %d %d\n", x, y, z);
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
