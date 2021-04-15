#include<bits/stdc++.h>
using namespace std;

int n,h[1000000];

int SolveA()
{
	int ans=1,cut=0,f;
	bool up=1;
	f=h[0];
	for(int i=1;;i++)
	{
		if(ans+cut==n){break;}
		if(up)
		{
			if(h[i]>f){cut++;f=h[i];continue;}
			if(h[i]<f){ans++;f=h[i];up=0;continue;}
			if(h[i]==f){cut++;continue;}
		}
		else
		{
			if(h[i]<f){cut++;f=h[i];continue;}
			if(h[i]>f){ans++;f=h[i];up=1;continue;}
			if(h[i]==f){cut++;continue;}
		}
	}
	return ans;
}

int SolveB()
{
	int ans=1,cut=0,f;
	bool down=1;
	f=h[0];
	for(int i=1;;i++)
	{
		if(ans+cut==n){break;}
		if(down)
		{
			if(h[i]<f){cut++;f=h[i];continue;}
			if(h[i]>f){ans++;f=h[i];down=0;continue;}
			if(h[i]==f){cut++;continue;}
		}
		else
		{
			if(h[i]>f){cut++;f=h[i];continue;}
			if(h[i]<f){ans++;f=h[i];down=1;continue;}
			if(h[i]==f){cut++;continue;}
		}
	}
	return ans;
}

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&h[i]);
	printf("%d",max(SolveA(),SolveB()));
	return 0;
}
