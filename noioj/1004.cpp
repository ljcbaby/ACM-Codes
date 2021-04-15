#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	long long m,n,a,countm,countn,result;
	cin >> m >> n >> a ;
	countm = m / a;
	countn = n / a;
	result = countm * countn;
	cout << result;
	return 0;
}