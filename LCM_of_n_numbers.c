#include<stdio.h>
int main()
{
    int i,n,j,l=0,k=0;
    scanf("%d",&n);
    int a[100];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;l<2;i++)
    {
        k=0;
    
    for(j=1;j<=n;j++)
    {
        if(i%a[j]==0)
        k++;
    }
    if(k==n)
    {
        l=3;
        printf("%d",i);
    }
    }
}