#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n, ti, pos;
int i, j;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d", &t);
    for (;t > 0;t--) {
        scanf("%d", &n);
        pos = 2;
        for (i = 0;i < n;i++) {
            scanf("%d", &ti);
            for (j = 2;j <= pos;j++)
                if (ti % j)
                    break;
            if (j > pos)
                break;
            else
                pos++;
        }
        if (i == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        for (i++;i < n;i++)
            scanf("%*d");
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}