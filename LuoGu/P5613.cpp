#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m,k,f=0,a,t=0;

int main(){
	freopen("leaf.in","r",stdin);
	freopen("leaf.out","w",stdout);
	freopen("leaf.err","w",stderr);
	scanf("%d%d%d",&n,&m,&k);
	if(k!=0){
		while(k>0){
			scanf("%d",&a);
			if((a-f)%m==0){
				t+=(a-f)/m;
				m++;
				f=a;
			}
			k--;
		}
		t+=(n-f+m-1)/m;
		cout<<t;
	}else{
		cout<<(n+m-1)/m;
	}
    return 0;
}

