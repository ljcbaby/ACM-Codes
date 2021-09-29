#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int n, a, b, c;

int sgn(int x) {
    if (x == 0)return 0;
    if (x > 0)return 1;
    return -1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a >> b >> c;
        switch (sgn(a + c - b)) {
        case 1:cout << "do not advertise" << endl;break;
        case 0:cout << "does not matter" << endl;break;
        case -1:cout << "advertise" << endl;break;
        }
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
