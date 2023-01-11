#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    a=0;
    b=1;
    c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}