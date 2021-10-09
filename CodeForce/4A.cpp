#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int t;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> t;
    if (t % 2 == 0 && t > 2)
        cout << "YES";
    else
        cout << "NO";
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
