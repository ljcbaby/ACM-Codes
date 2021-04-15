#include<bits/stdc++.h>
using namespace std;

int n,c=0;
char a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
string s[50000];
int f(char n){return n-'0';}
string tf(char n){
    if(n=='1') return "1";
    if(n=='2') return "2";
    return "3";
}

int main(){
    ios::sync_with_stdio(0);
    cin>>n;
    if((n<10)||(n>30)){cout<<0;return 0;}
    for(a0='1';a0<'4';a0++)
        for(a1='1';a1<'4';a1++)
            for(a2='1';a2<'4';a2++)
                for(a3='1';a3<'4';a3++)
                    for(a4='1';a4<'4';a4++)
                        for(a5='1';a5<'4';a5++)
                            for(a6='1';a6<'4';a6++)
                                for(a7='1';a7<'4';a7++)
                                    for(a8='1';a8<'4';a8++)
                                        for(a9='1';a9<'4';a9++)
                                            if(n==f(a0)+f(a1)+f(a2)+f(a3)+f(a4)+f(a5)+f(a6)+f(a7)+f(a8)+f(a9)){
                                                s[c]=tf(a0)+" "+tf(a1)+" "+tf(a2)+" "+tf(a3)+" "+tf(a4)+" "+tf(a5)+" "+tf(a6)+" "+tf(a7)+" "+tf(a8)+" "+tf(a9)+" ";c++;}
    cout<<c<<endl;
    for(int i=0;i<c;i++)
        cout<<s[i]<<endl;
    return 0;
}
