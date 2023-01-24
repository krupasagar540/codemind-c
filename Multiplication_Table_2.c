#include<stdio.h>
int main()
{
    int n,a,i;
    int prod=1;
    scanf("%d%d",&n,&a);
    for(i=1;i<=a;i++)
    {
        prod=n*i; 
       printf("%d x %d = %d
",n,i,prod);
    }
}
