#include<bits/stdc++.h>
using namespace std;
const int N=100006;
const int M=200006;

int n,m,t1,len[N],v[M],w[M],fst[N],nxt[M];
bool sit[N];
priority_queue<pair<int,int> > pq;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%d%d%d",&n,&m,&t1);
	sit[1]=1;
	len[1]=0;
	for(int i=2;i<=n;i++)len[i]=1e9+1;
	for(int i=1;i<=m;i++){
		scanf("%d%d%d",&t1,&v[i],&w[i]);
		if(fst[t1]==0){
			fst[t1]=i;
			nxt[i]=0;
		}else{
			nxt[i]=fst[t1];
			fst[t1]=i;
		}
	}
	for(int i=fst[1];i!=0;i=nxt[i]){
		len[v[i]]=min(w[i],len[v[i]]);
		pq.push(make_pair(0-len[v[i]],v[i]));
	}
	while(!pq.empty()){
		t1=pq.top().second;
		pq.pop();
		if(sit[t1])continue;
		sit[t1]=1;
		for(int i=fst[t1];i!=0;i=nxt[i]){
			if(len[v[i]]>len[t1]+w[i]){
				len[v[i]]=len[t1]+w[i];
				pq.push(make_pair(0-len[v[i]],v[i]));
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d ",len[i]);
	}
    return 0;
}

