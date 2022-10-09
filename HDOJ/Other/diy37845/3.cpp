// 未完成
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int n, x, y, top, down, res;
bool m[505][505], l[505];

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    char ch;
    for (int i = 1;i <= n;i++) {
        cin >> x >> y;
        top = down = x + 1;
        for (int j = 1;j <= x;j++, l[j] = 1);
        for (int j = 1;j <= x;j++) {
            for (int k = 1;k <= y;k++) {
                do { ch = getchar(); } while (ch == '.' || ch == '#');
                if (ch == '.')
                    m[j][k] = 0;
                else
                    m[j][k] = 1;
            }
        }
        for (int k = 1;k <= y;k++) {
            int flag = 0;
            for (int j = 2;j <= x;j++) {
                if (m[j][k]) {
                    top = min(top, j);
                    flag = 1;
                }
                else
                    if (flag)
                        l[j] = 0;
            }
        }
        res = 1;
        for (int j = x;j >= top;j--)
            if (l[j])
                res++;
        cout << "Case " << i << ": " << res << endl;
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
