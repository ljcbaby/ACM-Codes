#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	long long n;
	scanf("%d",&n);
	int i=1;
	while(n!=1)
	{
		if(n%2==0)
			n=n/2;
		else
			n=3*n+1;
		i++;
	}
	printf("%d",i);
	return 0;
}