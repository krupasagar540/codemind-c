#include<stdio.h>
int main()
{
    int i,d,n;
    int ec=0,oc=0;
    scanf("%d",&n);
    i=0;
    while (n!=0)
    {
        d=n%10;
        n=n/10;
        i+=1;
        if (d%2==0)ec+=1;
        else oc+=1;
    }
    if(i==ec)
    {
        printf("Even");
    }
    else if(i==oc)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}