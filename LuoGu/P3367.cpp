#include <bits/stdc++.h>
using namespace std;
const int N=10005;

int m,n,f[N],z,x,y;

int FindFather(int x){
	if(f[x]==x) return x;
	return f[x]=FindFather(f[x]);
}

int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)f[i]=i;
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&z,&x,&y);
		if(z==1){
			f[FindFather(y)]=FindFather(x);
		}else{
			if(FindFather(x)==FindFather(y))printf("Y\n"); else printf("N\n");
		}
	}
	return 0;
}