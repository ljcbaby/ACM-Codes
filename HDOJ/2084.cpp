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
    while (T--) {
        int n;
        scanf("%d", &n);
        int a[n + 2][n + 2];
        memset(a, 0, sizeof(int) * (n + 2) * (n + 2));
        for (int i = 1;i <= n;i++)
            for (int j = 1;j <= i;j++) {
                scanf("%d", &a[i][j]);
                a[i][j] += max(a[i - 1][j], a[i - 1][j - 1]);
            }
        int ans = 0;
        for (int i = 1;i <= n;i++)
            if (a[n][i] > ans)
                ans = a[n][i];
        printf("%d\n", ans);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
