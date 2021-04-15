#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int X=401;
const int M=401;

int n,m,x,a,b,c,f[M][X];

int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	freopen("1.err","w",stderr);
	scanf("%d%d%d",&m,&x,&n);
	for(register int i=0;i<n;i++){
		scanf("%d%d%d",&b,&c,&a);
		for(register int j=m;j>=b;j--)
			for(register int k=x;k>=c;k--)
			f[j][k]=max(f[j][k],f[j-b][k-c]+a);
	}
	cout<<f[m][x];
    return 0;
}

