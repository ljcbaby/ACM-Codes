#include<bits/stdc++.h>
using namespace std;
const int N=200;

int n,a[N],s[N][N],i,j,k,cut=0;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		a[i+n]=a[i];
	}
	for(j=1;j<=n;j++)
		for(i=0;i<n*2;i++)
			for(k=i+1;k<i+j;k++){
				if(i+j>=n*2) continue;
				s[i][i+j]=max(s[i][i+j],s[i][k]+s[k][i+j]+a[i]*a[k]*a[i+j]);
			}
	for(i=0;i<n;i++) cut=max(cut,s[i][i+n]);
	printf("%d",cut);
    return 0;
}
