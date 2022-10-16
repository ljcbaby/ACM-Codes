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
        int m, n;
        scanf("%d%d", &m, &n);
        pair<int, int> a[n];
        for (int i = 0;i < n;i++)
            scanf("%d%d", &a[i].first, &a[i].second);
        sort(a, a + n);
        double ans = 0;
        for (int i = 0;i < n;i++)
            if (m >= a[i].first * a[i].second) {
                m -= a[i].first * a[i].second;
                ans += a[i].second;
            } else {
                ans += (double)m * a[i].second / a[i].first;
                break;
            }
        printf("%.2f\n", ans);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}