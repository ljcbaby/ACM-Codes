#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define PI 3.1415927

double d, r, s;
int i;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (++i) {
        cin >> d >> r >> s;
        if (r == 0)break;
        s /= 3600;
        printf("Trip #%d: %.2lf %.2lf\n", i, PI * d * r / 5280 / 12, PI * d * r / 5280 / 12 / s);
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
