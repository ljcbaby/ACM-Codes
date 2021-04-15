#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,ans=1,pn[4]={6,8,4,2};

int main(){
	scanf("%d",&n);
	while(n>0){
		for(int i=2;i<=n%10;i++)
			if(i!=5)ans=ans*i%10;
		n/=5;
		ans=ans*pn[n%4]%10;
	}
	printf("%d",ans);
    return 0;
}

