#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;

int main() {
#ifndef ONLINE_JUDGE
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
	freopen("1.err", "w", stderr);
#endif
	cin >> a >> b >> c;
	printf("%8lld %8lld %8lld", a, b, c);
#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	fclose(stderr);
#endif
	return 0;
}
