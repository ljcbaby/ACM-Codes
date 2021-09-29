#include<stdio.h>
#include<math.h>
int main()
{
    int t,s,m,n;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0)
        printf("0");
    else if(s>=m*t)
        printf("0");
    else if(s%t==0)
        printf("%d",m-s/t);
    else if(s%t!=0)
    {
        n=m-s/t-1;
        printf("%d",n);
        return 0;
    }
  return 0;
}