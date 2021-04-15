#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct st{
	int y,x1,x2;
	bool operator < (const st& b) const {
		return y > b.y;
	}
} te;

int n,h[10005];
ll s;
priority_queue<st> pq;

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&te.y,&te.x1,&te.x2);
		pq.push(te);
	}
	while(!pq.empty()){
		te=pq.top();
		pq.pop();
		s+=te.y-h[te.x1];
		s+=te.y-h[te.x2-1];
		for(int i=te.x1;i<te.x2;i++)
			h[i]=te.y;
	}
	printf("%lld",s);
    return 0;
}
