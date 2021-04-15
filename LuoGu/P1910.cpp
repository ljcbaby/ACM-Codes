#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int X=1001;
const int M=1001;

int n,m,x,a,b,c,f[M][X];

int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	freopen("1.err","w",stderr);
	scanf("%d%d%d",&n,&m,&x);
	for(register int i=0;i<n;i++){
		scanf("%d%d%d",&a,&b,&c);
		for(register int j=m;j>=b;j--)
			for(register int k=x;k>=c;k--)
			f[j][k]=max(f[j][k],f[j-b][k-c]+a);
	}
	cout<<f[m][x];
    return 0;
}

