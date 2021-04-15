#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	return gcd(b,a%b)	;
}

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
		a^=b^=a^=b;
	if(gcd(a,b)==1)
		printf("Yes");
	else
		printf("No");
	return 0;
}