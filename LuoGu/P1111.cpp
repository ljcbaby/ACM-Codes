#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e5+5;
const int N=1e3+5;

int n,m,cnt,flag=0,f[N];

struct side{
	int x,y,t;
} s[M];

bool operator < (const side& a,const side& b){
	return a.t<b.t;
}

int ffa(int x){
	if(f[x]==x)return x;
	return f[x]=ffa(f[x]);
}

int main(){
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
//	freopen("1.err","w",stderr);
	scanf("%d%d",&n,&m);
	for(register int i=0;i<m;i++)scanf("%d%d%d",&s[i].x,&s[i].y,&s[i].t);
	for(register int i=0;i<n;i++)f[i]=i;
	sort(s,s+m);
	
//	for(register int i=0;i<m;i++)printf("%d %d %d\n",s[i].x,s[i].y,s[i].t);
	
	cnt=n;
	while(cnt>1&&flag<m){
		if(ffa(s[flag].x)!=ffa(s[flag].y)){
			f[f[s[flag].y]]=f[s[flag].x];
			cnt--;
		}
		flag++;
	}
//	cout<<cnt<<endl;
	if(cnt==1)
		cout<<s[flag-1].t;
 	else
	    cout<<-1;
    return 0;
}

