#include<bits/stdc++.h>
using namespace std;

int t,c=0,st=0;

int main()
{
	for(int i=0;i<12;i++)
	{
		c+=300;
		scanf("%d",&t);
		c-=t;
		if(c<0){printf("%d",-(i+1));break;}
		st+=c/100;
		c=c%100;
		if(i==11){printf("%d",st*120+c);}
	}
	return 0;
}
