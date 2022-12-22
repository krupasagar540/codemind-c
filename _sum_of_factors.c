#include<stdio.h>
int main()
{
    int n,i,a,s=0;
    scanf("%d",&a);
    n=a;
    for(i=1;i<=n;i++)
    {
        if(a%i==0&&a!=i)
        {
            s=s+i;
        }
    }
    printf("%d",s);
}