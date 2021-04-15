#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=2005;

int n,m,a[M],b[M],c[M],cnt=0;

int main(){
	freopen("mosiyuan.in","r",stdin);
	freopen("mosiyuan.out","w",stdout);
//	freopen("mosiyuan.err","w",stderr);
	scanf("%d%d",&n,&m);
	for(register int i=0;i<n;i++)scanf("%d%d%d",&a[i],&b[i],&c[i]);
	for(register int i=1;i<=m;i++)
		for(register int j=1;j<=m;j++)
			for(register int k=1;k<=m;k++){
				bool f=1;
				for(register int l=0;l<n;l++)
					if((abs(a[l]-i) ^ abs(b[l]-j) ^ abs(c[l]-k))!=9){f=0;break;}
				if(f)cnt++;
			}
	cout<<cnt;
    return 0;
}
