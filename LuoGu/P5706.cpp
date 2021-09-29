#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

double a;
int b;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> a >> b;
    printf("%.3lf\n%d", a / b, b * 2);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
