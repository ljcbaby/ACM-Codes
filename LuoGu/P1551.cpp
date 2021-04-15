#include <bits/stdc++.h>
using namespace std;
const int N=10005;

int m,n,p,f[N],x,y;

int FindFather(int x){
	if(f[x]==x) return x;
	return f[x]=FindFather(f[x]);
}

int main()
{
	scanf("%d%d%d",&n,&m,&p);
	for(int i=1;i<=n;i++)f[i]=i;
	for(int i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		f[FindFather(y)]=FindFather(x);
	}
	for(int i=0;i<p;i++){
		scanf("%d%d",&x,&y);
		if(FindFather(x)==FindFather(y))printf("Yes\n"); else printf("No\n");
	}
	return 0;
}
