#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    while(s!=1 && s!=4)
    {
        s=0;
        while(n>0)
        {
            i=n%10;
            s=s+(i*i);
            n=n/10;
        }
        n=s;
    }
    if(s==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}