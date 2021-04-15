#include<bits/stdc++.h>
using namespace std;
int n,a[200001],ans[200001],he=0,maxn=-9999999;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	ans[i]=max(ans[i-1]+a[i],a[i]);
    	maxn=max(ans[i],maxn);
	}
	cout<<maxn<<endl;
    return 0;
}
