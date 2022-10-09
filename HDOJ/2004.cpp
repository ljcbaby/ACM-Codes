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
    while (cin >> n) {
        if (n > 100) {
            cout << "Score is error!" << endl;
            continue;
        }
        if (n >= 90) {
            cout << "A" << endl;
            continue;
        }
        if (n >= 80) {
            cout << "B" << endl;
            continue;
        }
        if (n >= 70) {
            cout << "C" << endl;
            continue;
        }
        if (n >= 60) {
            cout << "D" << endl;
            continue;
        }
        if (n >= 0) {
            cout << "E" << endl;
            continue;
        }
        cout << "Score is error!" << endl;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}