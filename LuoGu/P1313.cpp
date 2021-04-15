#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int p=10007;

int a,b,k,n,m,ans=1;

int exped(int a,int x){
	if(a==1)return 1;
	int res=1;
	while(x){
		a%=p;
		if(x&1){
			res=res*a%p;
		}
		a*=a;
		x>>=1;
	}
	return res;
}

int c(int m,int n){
	int ans=1;
	if(n>m*2)m=n-m;
	for(int i=1;i<=n-m;i++){
		ans=ans*(m+i)%p;
		ans=ans*exped(i,p-2)%p;
	}
	return ans;
}

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%d%d%d%d%d",&a,&b,&k,&n,&m);
	//cout<<exped(a,n)<<" "<<exped(b,m)<<" "<<c(n,k)<<endl;
	ans=((ans*exped(a,n)%p)*exped(b,m)%p)*c(n,k)%p;
	printf("%d",ans);
	return 0;
}