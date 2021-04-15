#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,p;

ll exped(int i){
	if(i==1)return 1;
	ll fp=p-2,res=1,f=i;
	while(fp){
		if(fp&1){
			res*=f;
			if(res>p)res%=p;
		}
		f*=f;
		if(f>p)f%=p;
		fp>>=1;
	}
	return res;
}

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%d%d",&n,&p);
	for(int i=1;i<=n;i++){
		printf("%lld\n",exped(i));
	}
    return 0;
}

