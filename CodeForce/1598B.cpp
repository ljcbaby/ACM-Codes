#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int n, w, t1, c1, t2, c2;
bool a[1000][5];

int bfs(int n) {
    // cerr << n << " " << t1 << " " << c1 << " " << t2 << " " << c2 << endl;
    if (n == 0) {
        for (int i = 0;i < 5;i++)
            if (a[0][i]) {
                t1 = i;
                c1 = 1;
                if (bfs(1))return 1;
            }
    }
    if (c1 * 2 > w || c2 * 2 > w)return 0;
    if (n == w)
        if (c1 == c2)
            return 1;
        else
            return 0;
    if (a[n][t1]) {
        c1++;
        if (bfs(n + 1))return 1;
        c1--;
    }
    if (t2 != -1) {
        if (a[n][t2]) {
            c2++;
            if (bfs(n + 1))return 1;
            c2--;
        }
    }
    else {
        bool f = 1;
        for (int i = 0;i < 5;i++) {
            if (a[n][i] && i != t1) {
                t2 = i;
                c2 = 1;
                f = 0;
                if (bfs(n + 1))return 1;
                t2 = -1;
            }
        }
        if (f)
            return 0;
    }
    return 0;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (;n > 0;n--) {
        cin >> w;
        if (w % 2) {
            w++;
            while (w) {
                if (getchar() == '\n')w--;
            }
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0;i < w;i++)
            for (int j = 0;j < 5;j++)
                cin >> a[i][j];
        t1 = t2 = -1;
        c1 = c2 = 0;
        cout << (bfs(0) ? "YES" : "NO") << endl;
        // cerr << endl;
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
