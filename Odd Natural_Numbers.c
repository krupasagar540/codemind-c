#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n/2;i++)
    {
        printf("%d ",i*2-1);
    }
}