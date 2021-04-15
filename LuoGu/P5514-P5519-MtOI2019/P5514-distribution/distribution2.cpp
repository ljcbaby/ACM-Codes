#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6;

int n,a[N],fi=0,t;
ll suma;

int main()
{
	freopen("distribution.in","r",stdin);
	freopen("distribution.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){scanf("%d",&a[i]);suma+=a[i];}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(!a[i])continue;
		for(int j=i+1;j<n;j++){
			if(!a[j])continue;
			if((a[i]^a[j])<(a[i]+a[j])){
				suma-=(a[i]+a[j])-(a[i]^a[j]);
				a[i]^=a[j];
				a[j]=0;
			}
		}
	}
	printf("%lld",suma);
    return 0;
}

