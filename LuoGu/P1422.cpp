#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,c;
	scanf("%lf",&a);
	c=0;
	if(a>400)
	{
		c=c+(a-400)*0.5663;
		a=400;
	}
	if(a>150)
	{
		c=c+(a-150)*0.4663;
		a=150;
	}
	c=c+a*0.4463;
	printf("%.1f",c);
	return 0;
}
