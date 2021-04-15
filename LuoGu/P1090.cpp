#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;

long long n,temp,t1,t2;
priority_queue<long long,vector<long long>,greater<long long> > pq;

int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&temp);
		pq.push(temp);
	}
	long long cut=0;
	for(int i=1;i<n;i++)
	{
		t1=pq.top();
		pq.pop();
		t2=pq.top();
		pq.pop();
		temp=t1+t2;
		pq.push(temp);
		cut=cut+temp;
	}
	printf("%lld",cut);
	return 0;
}
