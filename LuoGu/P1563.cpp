#include<bits/stdc++.h>
using namespace std;
#define Fix(x) ((x)%n+n)%n
typedef long long ll;
const int M=1e5;

int n,m,flag=0,face[M],t,r;
string name[M];

int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	freopen("1.err","w",stderr);
	scanf("%d%d",&n,&m);
	for(register int i=0;i<n;i++){scanf("%d",&face[i]);cin>>name[i];}
	for(register int i=0;i<m;i++){
		scanf("%d%d",&t,&r);
		if(face[flag]^t)
			flag=Fix(flag+r);
		else
			flag=Fix(flag-r);
	}
	cout<<name[flag];
    return 0;
}

