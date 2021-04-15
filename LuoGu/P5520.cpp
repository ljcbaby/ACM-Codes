#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int type,n,m,p;

ll func(int f,int n){
	ll sum=f;
	for(int i=f+1;i<=n;i++){
		sum=sum*i%p;
	}
	return sum;
}

int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%d%d%d%d",&type,&n,&m,&p);
	printf("%llu",func(n+2-2*m,n+1-m)%p);
    return 0;
}
