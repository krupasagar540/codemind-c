#include<stdio.h>
int main()
{
    int i,n;
    int a=0,b=1;
    int c=a+b;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=3;i<=n;++i)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
        
    }
 
}