#include<stdio.h>
int main()
{
    int n,a=12,i;
    int prod=1;
    scanf("%d",&n);
    for(i=1;i<=a;i++)
    {
        prod=n*i; 
       printf("%d x %d = %d
",n,i,prod);
    }
}