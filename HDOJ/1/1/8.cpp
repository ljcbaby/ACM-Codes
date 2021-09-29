#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, t;
    cin >> n;
    for (int j = 1;j < n;j++) {
        int sum = 0;
        cin >> m;
        for (int i = 0;i < m;i++) {
            cin >> t;
            sum += t;
        }
        cout << sum << endl << endl;
    }
    int sum = 0;
    cin >> m;
    for (int i = 0;i < m;i++) {
        cin >> t;
        sum += t;
    }
    cout << sum << endl;

}
