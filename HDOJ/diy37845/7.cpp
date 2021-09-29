#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (~scanf("%d", &n)) {
        for (int i = 1;i * i <= n;i++, n++);
        cout << n << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
