#include<stdio.h>
int main()
{
    int n,rem,max=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(max<rem){
            max=rem;
        }
        n=n/10;
    }
    printf("%d",max);
}