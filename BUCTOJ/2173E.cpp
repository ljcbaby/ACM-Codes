#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, c;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> a >> b >> c;
    printf("%d\n", a + b + c - max(max(a, b), c));
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
