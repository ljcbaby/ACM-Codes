#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int T;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
    freopen("1.err", "w", stderr);
#endif
    cin >> T;
    const double pi=3.141593;
    switch(T){
        case 1:cout<<"I love Luogu!";break;
        case 2:cout<<"6 4";break;
        case 3:cout<<"3\n12\n2";break;
        case 4:cout<<"166.667";break;
        case 5:cout<<480/32;break;
        case 6:cout<<sqrt(36+81);break;
        case 7:cout<<"110\n90\n0";break;
        case 8:cout<<"31.4159\n"<<25*pi<<endl<<125*4*pi/3;break;
        case 9:cout<<"22";break;
        case 10:cout<<"9";break;
        case 11:cout<<100/3.0;break;
        case 12:cout<<"13\nR";break;
        case 13:cout<<(int)(pow(4/3.0*pi*(4*4*4+10*10*10),1/3.0));break;
        case 14:cout<<"50";break;
    }
#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
    fclose(stderr);
#endif
    return 0;
}
