#include<stdio.h>
int main()
{
    int n,s,sum=0,r=0,m;
    scanf("%d",&n);
    m=n;
    s=n*n;
    while(s>0)
    {
        r=s%10;
        sum=sum+r;
        s=s/10;
    }
    if(sum==m)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}