#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=6;

int n,m,a[M],b[M],c[M];

int main(){
//	freopen("mosiyuan.in","r",stdin);
//	freopen("mosiyuan.out","w",stdout);
//	freopen("mosiyuan.err","w",stderr);
	scanf("%d%d",&n,&m);
	register int cnt=0;
	register bool f;
	for(register int i=0;i<n;i++)scanf("%d%d%d",&a[i],&b[i],&c[i]);
	for(register int i=1;i<=m;i++)
		for(register int j=1;j<=m;j++){
			int k=9^abs(a[0]-i) ^ abs(b[0]-j);
			int z1=c[0]+k,z2=c[0]-k;
//			cerr<<k<<" "<<z1<<" "<<z2<<endl;
			if(z1<=m){
				f=1;
				for(register int l=1;l<n&&f;l++)
					if((abs(a[l]-i) ^ abs(b[l]-j) ^ abs(c[l]-z1))!=9)f=0;
				if(f)cnt++;
			}
			if(z2>0&&z2!=z1){
				f=1;
				for(register int l=1;l<n&&f;l++)
					if((abs(a[l]-i) ^ abs(b[l]-j) ^ abs(c[l]-z2))!=9)f=0;
				if(f)cnt++;
			}
		}
	cout<<cnt;
    return 0;
}

