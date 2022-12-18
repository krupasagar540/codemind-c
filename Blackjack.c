#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=21-(a+b);
    if(c>10)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
}