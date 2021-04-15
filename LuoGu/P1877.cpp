#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=50;
const int L=1000;

int chg[N],n,bl,m;
bool v[N][L];

void dfs(int i,int l){
	if(i==n)return;
	if((l+chg[i]<=m)&&(!v[i][l+chg[i]])){v[i][l+chg[i]]=1;dfs(i+1,l+chg[i]);}
	if((l-chg[i]>=0)&&(!v[i][l-chg[i]])){v[i][l-chg[i]]=1;dfs(i+1,l-chg[i]);}
}

int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%d%d%d",&n,&bl,&m);
	for(register int i=0;i<n;i++)
		scanf("%d",&chg[i]);
	dfs(0,bl);
	for(register int i=m;i>=0;i--)
		if(v[n-1][i]){
			printf("%d",i);
			return 0;
		}
	printf("-1");
    return 0;
}

