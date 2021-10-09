#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
int n, a, b, c;
char ch;
 
int main() {
    scanf("%d\n", &n);
    for (;0 < n;n--) {
        a = b = c = 0;
        do {
            ch = getchar();
            if (ch == '\n')break;
            if (ch == 'A')a++;
            if (ch == 'B')b++;
            if (ch == 'C')c++;
        } while (1);
        if (a + c == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}