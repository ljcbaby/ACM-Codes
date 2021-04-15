#include<bits/stdc++.h>
using namespace std;
const int N=100006;

int n,m,f[17][N],len,i,fa,fb,t,cd[N];

int main()
{
//    ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
//	cin>>n>>m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&f[0][i]);
//		cin>>f[0][i];
	for(fa=0;fa<16;fa++){
		fb=1<<fa;
		t=n-fb;
		for(i=0;i<=t;i++)
			f[fa+1][i]=max(f[fa][i],f[fa][i+fb]);
	}
	cd[1]=0;
	for(i=2;i<=n;i++)
		cd[i]=cd[i>>1]+1;
	for(i=0;i<m;i++){
//		cin>>fa>>fb;
		scanf("%d%d",&fa,&fb);
		len=cd[fb-fa+1];
		printf("%d\n",max(f[len][fa-1],f[len][fb-(1<<len)]));
//		cout<<max(f[len][fa-1],f[len][fb-(1<<len)])<<endl;
	}
    return 0;
}

