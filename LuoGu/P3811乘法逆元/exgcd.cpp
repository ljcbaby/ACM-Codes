#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,p,y,t=1,x,te;

void exgcd(ll a,ll b){
	if(b){
		exgcd(b,a%b);
		te=x;
		x=y;
		y=te - a / b * y;
	}else{
		x=1;
		y=0;
	}
}

int main()
{
	scanf("%lld%lld",&n,&p);
	for(int i=1;i<=n;i++){
		exgcd(i,p);
		printf("%lld\n",(x%p+p)%p);
		x=0;
		y=0;
	}
    return 0;
}