#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;

uint upbit(uint x){
	uint ans=2147483648,i=31;
	while((ans&x)==0){
		ans>>=1;
		i--;
	}
	return i;
}

void pout(uint n){
	uint x;
	while(n){
		x=upbit(n);
		if(x==0) printf("2(0)");
		else if(x==1) printf("2");
		else {
			printf("2(");
			pout(x);
			printf(")");
		}
		n-=1<<x;
		if(n)printf("+");
	}
}

int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	freopen("1.err","w",stderr);
	uint n;
	scanf("%u",&n);
	pout(n);
    return 0;
}

