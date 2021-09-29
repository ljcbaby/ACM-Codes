#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

double a, b, c, p;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    printf("%.1lf", pow(p * (p - a) * (p - b) * (p - c), 0.5));
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
