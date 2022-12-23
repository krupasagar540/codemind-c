#include<stdio.h>
int main()
{
    int i,m,n,c=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
}