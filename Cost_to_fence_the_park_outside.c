#include<stdio.h>
int main()
{
    int l,b,w,c,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    tc=c*((l+2*w)*(b+2*w)-(l*b));
    printf("%d",tc);
}