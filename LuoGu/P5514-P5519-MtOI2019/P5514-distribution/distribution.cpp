#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6;

int n,a[N],suma,fi=0,t;
map<int,int> m;

int main()
{
	freopen("distribution.in","r",stdin);
	freopen("distribution.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++){scanf("%d",&t);m[t]++;}
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
		if((*it).second==1){
			a[fi]=(*it).first;
			suma+=a[fi++];
		}
	}
	n=fi;
	for(int i=0;i<n;i++){
		if(!a[i])continue;
		for(int j=i+1;j<n;j++){
			if(!a[j])continue;
			if((a[i]^a[j])<(a[i]+a[j])){
				suma-=(a[i]+a[j])-(a[i]^a[j]);
				a[i]^=a[j];
				a[j]=0;
			}
		}
	}
	printf("%d",suma);
    return 0;
}

