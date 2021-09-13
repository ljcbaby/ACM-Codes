#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char a;

int main() {
#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	freopen("1.err", "w", stderr);
#endif
	cin >> a;
	printf("  %c\n", a);
	printf(" %c%c%c\n", a, a, a);
	printf("%c%c%c%c%c\n", a, a, a, a, a);
#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	fclose(stderr);
#endif
	return 0;
}
