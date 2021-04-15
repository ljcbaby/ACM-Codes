#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a,b,y,t=1,x,te;

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
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%lld%lld",&a,&b);
	exgcd(a,b);
	printf("%lld",(x%b+b)%b);
    return 0;
}

