#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	int n,n123,n91;
	char ch;
	scanf("%d",&n);
	n123=n % 123;
	if(n123>96)
	{
		
		ch=n123;
		printf("%c",ch);
	}
	else
	{
		n91=n % 91;
		if(n91>64)
		{
			ch=n91;
			printf("%c",ch);
		}
		else
		{
		printf("*");
		}
	}
	return 0;
}