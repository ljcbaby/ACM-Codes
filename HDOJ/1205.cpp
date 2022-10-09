#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        ll sum = 0, max = 0;
        while (x--) {
            int y;
            cin >> y;
            sum += y;
            if (y > max)
                max = y;
        }
        if (sum + 1 >= max * 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}