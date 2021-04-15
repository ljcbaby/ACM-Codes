#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,t1,t2;
ll sx,sy;

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&t1,&t2);
		sx-=t1;
		sy+=t2;
	}
	for(int i=0;i<n;i++){
		scanf("%d%d",&t1,&t2);
		sx+=t1;
		sy-=t2;
	}
	printf("%lld",sx+sy);
    return 0;
}

