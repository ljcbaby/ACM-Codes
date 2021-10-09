#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int n;
string s;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> n;
    getchar();
    for (;n > 0;n--) {
        getline(cin, s);
        if (s.length() > 10)
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        else
            cout << s << endl;
    }
#ifndef ONLINE_JUDGE
    fcloseall();
#endif
    return 0;
}
