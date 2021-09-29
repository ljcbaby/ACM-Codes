#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    while (cin >> n) {
        if (n == 0)break;
        int sum = 0;
        for (int i = 0;i < n;i++) {
            cin >> t;
            sum += t;
        }
        cout << sum << endl;
    }
}
