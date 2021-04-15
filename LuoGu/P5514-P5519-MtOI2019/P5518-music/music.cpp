#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int T,p,a,b,c;

ll powe(ll t,ll e){
	ll res=1;
	while(e){
		if(e&1){
			res*=t;
			if(res>p)res%=p;
		}
		t*=t;
		if(t>p)t%=p;
		e>>=1;
	}
	return res;
}

ll f(int ty){
	ll t,res=1;
	for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++)
			for(int k=1;k<=c;k++){
				t=(i*j/__gcd(i,j))/__gcd(i,k);
				if(ty==1) t = powe(t,i*j*k);
				if(ty==2) t = powe(t,__gcd(__gcd(i,j),k));
				res=res*t%p;
			}
	return res;
}

int main(){
	freopen("music.in","r",stdin);
	freopen("music.out","w",stdout);
	scanf("%d%d",&T,&p);
	while(T){
		scanf("%d%d%d",&a,&b,&c);
		printf("%lld %lld %lld\n",f(0),f(1),f(2));
		T--;
	}
    return 0;
}

