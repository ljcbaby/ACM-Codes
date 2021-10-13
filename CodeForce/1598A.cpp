#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int n, w, a[105], ch, ans;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (;n > 0;n--) {
        scanf("%d\n", &w);
        for (int i = 0;i < w;i++) {
            a[i] = getchar() - 48;
        }
        getchar();
        ans = 0;
        for (int i = 0;i < w;i++) {
            a[i] = a[i] & (getchar() - 48);
            ans = ans | a[i];
        }
        getchar();
        cout << (ans ? "NO" : "YES") << endl;
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
