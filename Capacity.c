#include<stdio.h>
int main()
{
    int t,s,b,c,a;
    scanf("%d%d%d",&t,&s,&b);
    c=2*t*s*b*512;
    a=c/1024;
    printf("%d KB",a);
}