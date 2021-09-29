#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int toD() {
    int x, y, t = 0, a = 1;
    scanf("%d(%d)", &x, &y);
    while (x > 0) {
        t += x % 10 * a;
        a *= y;
        x /= 10;
    }
    return t;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n, t;
    while (cin >> n) {
        int sum = 0;
        for (int i = 0;i < n;i++) {
            sum += toD();
        }
        printf("%d\n", sum);
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
