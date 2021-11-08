#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b, c, x, y, z;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    scanf("%lld%lld%lld", &a, &b, &c);
    x = min(a, min(b, c));
    y = max(a, max(b, c));
    z = __gcd(x, y);
    printf("%lld/%lld", x / z, y / z);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}