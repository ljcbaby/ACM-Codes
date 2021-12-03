#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI 3.14159

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    double r;
    cin >> r;
    printf("%.4lf %.4lf %.4lf", r * 2, 2 * r * PI, PI * r * r);
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}