#include<bits/stdc++.h>
using namespace std;

int t[7],t1,t2;

int main()
{
	for(int i=0;i<7;i++)
	{
		scanf("%d%d",&t1,&t2);
		t[i]=t1+t2;
	}
	int fmax=-1;
	for(int i=0;i<7;i++)
		if(((fmax==-1)&&(t[i]>8))||(!(fmax==-1)&&(t[i]>t[fmax])))
			fmax=i;
	printf("%d",fmax+1);
	return 0;
}
