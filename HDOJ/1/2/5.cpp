#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

char c;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    while (c = getchar()) {
        if (c == '#')break;
        switch (c) {
        case ' ':printf("%%20");break;
        case '!':printf("%%21");break;
        case '$':printf("%%24");break;
        case '%':printf("%%25");break;
        case '(':printf("%%28");break;
        case ')':printf("%%29");break;
        case '*':printf("%%2a");break;
        default:putchar(c);
        }
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
