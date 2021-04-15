#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

unsigned int n,m,k,x;

inline unsigned int exp(){
	unsigned int i=10,ans=1;
	while(k){
		if(k&1){
			ans=ans*i%n;
		}
		i=i*i%n;
		k>>=1;
	}
	return ans;
}

int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
//	freopen("1.err","w",stderr);
	scanf("%u%u%u%u",&n,&m,&k,&x);
    cout<<(x+m*exp())%n;
    return 0;
}

