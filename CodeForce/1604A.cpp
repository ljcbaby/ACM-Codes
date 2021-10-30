#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long t, n, tmp, m;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> t;
    for (;t > 0;t--) {
        cin >> n;
        m = 0;
        for (int i = 1;i <= n;i++) {
            cin >> tmp;
            m = max(m, tmp - i);
        }
        cout << m << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}