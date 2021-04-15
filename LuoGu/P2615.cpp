#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=41;

int n,f=1,i,j=1,s,a[N][N];

int main(){
	scanf("%d",&n);
	i=(n+1)/2;
	s=n*n;
	while(f<=s){
		a[j][i]=f;
//		cout<<j<<i<<f<<endl;
		f++;
		if(j==1&&i==n||a[j-1][i+1]){j++;continue;}
		if(j==1)j=n;else j--;
		if(i==n)i=1;else i++;
	}
	for(register int c=1;c<=n;c++){
		for(register int b=1;b<=n;b++)
			printf("%d ",a[c][b]);
		printf("\n");
	}
	return 0;
}
