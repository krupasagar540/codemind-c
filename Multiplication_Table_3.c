#include<stdio.h>
int main()
{
    int n,a,b,i;
    int prod=1;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        prod=n*i; 
       printf("%d x %d = %d
",n,i,prod);
    }
}
