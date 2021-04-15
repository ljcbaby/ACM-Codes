#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
namespace Mker{
//  Powered By Kawashiro_Nitori
//  Made In Gensokyo, Nihon
	#define uint unsigned int
	uint sd;int op;
	inline void init() {scanf("%u %d", &sd, &op);}
	inline uint uint_rand()
	{
		sd ^= sd << 13;
		sd ^= sd >> 7;
		sd ^= sd << 11;
		return sd;
	}
	inline double get_n()
	{
		double x = (double) (uint_rand() % 100000) / 100000;
		return x + 4;
	}
	inline double get_k()
	{
		double x = (double) (uint_rand() % 100000) / 100000;
		return (x + 1) * 5;
	}
	inline void read(double &n,double &a, double &b)
	{
		n = get_n(); a = get_k();
		if (op) b = a;
		else b = get_k();
	}
}

int T;
double nu,nd,a,b,res,sumr=0,k;

int main(){
	freopen("calc.in","r",stdin);
	freopen("calc.out","w",stdout);
	scanf("%d",&T);
	Mker::init();
	while(T){
//		cout<<T<<endl;
		Mker::read(nu,a,b);
//		cout<<nu<<" "<<a<<" "<<b<<" "<<endl;
		res=round(pow(nu,a)+pow(nu,b));
		nd=nu;
		k=0.000001;
		do{nu+=k;}while(res==round(pow(nu,a)+pow(nu,b)));
		do{nd-=k;}while(res==round(pow(nd,a)+pow(nd,b)));
		k=0.0000001;
		do{nu-=k;}while(res!=round(pow(nu,a)+pow(nu,b)));
		do{nd+=k;}while(res!=round(pow(nd,a)+pow(nd,b)));
		k=0.00000001;
		do{nu+=k;}while(res==round(pow(nu,a)+pow(nu,b)));
		do{nd-=k;}while(res==round(pow(nd,a)+pow(nd,b)));
		k=0.000000001;
		do{nu-=k;}while(res!=round(pow(nu,a)+pow(nu,b)));
		do{nd+=k;}while(res!=round(pow(nd,a)+pow(nd,b)));
		k=0.0000000001;
		do{nu+=k;}while(res==round(pow(nu,a)+pow(nu,b)));
		do{nd-=k;}while(res==round(pow(nd,a)+pow(nd,b)));
//		cout<<res<<" "<<nu<<" "<<nd<<" "<<endl;
		sumr+=nu-nd;
		T--;
	}
	printf("%.5f",sumr);
    return 0;
}

