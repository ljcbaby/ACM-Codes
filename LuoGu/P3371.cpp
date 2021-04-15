#include<bits/stdc++.h>
using namespace std;
const int N=10006;
const int M=500006;

struct node{
	int len;
	bool sit;
};

int n,m,s,t1,u[M],v[M],w[M],fst[N],nxt[M];
node p[N];
priority_queue<pair<int,int> > pq;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%d%d%d",&n,&m,&s);
	p[s].sit=1;
	for(int i=1;i<=n;i++){
		fst[i]=-1;
		p[i].len=2147483647;
	}
	p[s].len=0;
	for(int i=1;i<=m;i++){
		scanf("%d%d%d",&u[i],&v[i],&w[i]);
		if(fst[u[i]]==-1){
			fst[u[i]]=i;
		}else{
			t1=fst[u[i]];
			while(nxt[t1]!=-1)t1=nxt[t1];
			nxt[t1]=i;
		}
		nxt[i]=-1;
	}
	for(int i=fst[s];i!=-1;i=nxt[i]){
		p[v[i]].len=min(w[i],p[v[i]].len);
		pq.push(make_pair(0-p[v[i]].len,v[i]));
	}
	while(!pq.empty()){
		t1=pq.top().second;
		pq.pop();
		if(p[t1].sit)continue;
		p[t1].sit=1;
		for(int i=fst[t1];i!=-1;i=nxt[i]){
			if(p[v[i]].len>p[t1].len+w[i]){
				p[v[i]].len=p[t1].len+w[i];
				pq.push(make_pair(0-p[v[i]].len,v[i]));
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d ",p[i].len);
	}
    return 0;
}

