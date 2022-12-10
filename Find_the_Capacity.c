#include<stdio.h>
int main()
{
    int s,t,b,c;
    scanf("%d%d%d",&s,&t,&b);
    c=(2*s*t*b*512)/1024;
    printf("%dKB",c);
}