#include <bits/stdc++.h>
using namespace std;

#define maxn 100000+5
long long vn[maxn];
long long n,m;

void print_long(long long x)
{
	if(x<0)
	{
		putchar('-');
		x=-x;
	}
	if(x>9)
		print_long(x/10);
	putchar(x%10+'0');
}

void deal(long long m)
{
	long long f_lower = lower_bound(vn+1,vn+n,m) - vn;
	if(f_lower==(n+1))
	{
		print_long(vn[n]);
		cout << endl;
		return;
	}
	if (m==vn[f_lower])
	{	
		print_long(m);
		cout <<  endl;
		return;
	}
	int up_m,down_m;
	up_m=vn[f_lower]-m;
	down_m=(f_lower!=1 ? m-vn[f_lower-1] : 1000000000);
	print_long(down_m<=up_m ? m-down_m : m + up_m);
	cout << endl;
}

void read_long(long long &x)
{
	int f=1;
	x=0;
	char s=getchar();
	while(s<'0'||s>'9')
	{
		if(s=='-')
			f=-1;
		s=getchar();
	}
	while(s>='0'&&s<='9')
	{
		x=x*10+s-'0';
		s=getchar();
	}
	x*=f;
}

int main()
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	read_long(n);
	for(long long i=1;i<=n;i++)
		read_long(vn[i]);
	//sort(vn+1,vn+n);
	read_long(m);
	long long vm;
	for(long long i=1;i<=m;i++)
	{
		read_long(vm);
		deal(vm);
	}
	return 0;
}