#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int a[100000][11];
bool r[100000][11];
int mT;

int dp(int T, int x) {
    if (x < 0 || x > 10 || T > mT) return 0;
    if (r[T][x])
        return a[T][x];
    r[T][x] = 1;
    int l = dp(T + 1, x - 1);
    int m = dp(T + 1, x);
    int r = dp(T + 1, x + 1);
    return a[T][x] += max(max(l, m), r);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n;
    while (scanf("%d", &n), n) {
        int x, T;
        mT = 0;
        while (n--) {
            scanf("%d %d", &x, &T);
            a[T][x]++;
            if (T > mT) mT = T;
        }
        printf("%d\n", dp(0, 5));
        memset(a, 0, sizeof(int) * 11 * (mT + 1));
        memset(r, 0, sizeof(bool) * 11 * (mT + 1));
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
