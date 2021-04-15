#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=3000005;

ll n,p,ans[N];

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%lld%lld",&n,&p);
	ans[1]=1;
	printf("%lld\n",ans[1]);
	for(int i=2;i<=n;i++){
		ans[i]=(p-p/i)*ans[p%i]%p;
		printf("%lld\n",ans[i]);
	}
    return 0;
}
