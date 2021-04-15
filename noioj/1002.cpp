#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	double a,b,c,p,s;
	cin >> a >> b >> c ;
	p = ( a + b + c ) / 2 ;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.4f",s);
	return 0;
}