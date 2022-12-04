#include<stdio.h>
int main()
{
    int s,t,b,cap;
    scanf("%d%d%d",&s,&t,&b);
    cap=(2*s*t*b*512)/1024;
    printf("%dkb",cap);
}