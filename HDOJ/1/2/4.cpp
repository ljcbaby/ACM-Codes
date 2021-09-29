#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int n, a, b;

bool is_LY(int Y) {
    return (Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a >> b;
        while(!is_LY(a))a++;
        int j = 1;
        while (j < b) {
            a += 4;
            if (is_LY(a))j++;
        }
        cout << a << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
