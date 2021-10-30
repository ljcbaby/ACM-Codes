#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n, a[100005];
bool f;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%d", &t);
    for (;t > 0;t--) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            cout << "YES" << endl;
            register int tmp;
            for (register int i = 0;i < n;i++)
                cin >> tmp;
            continue;
        }
        f = 0;
        for (int i = 0;i < n;i++) {
            scanf("%d", a + i);
            if (!f && i > 0 && a[i] <= a[i - 1])
                f = 1;
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}