#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int c=0;
    while(n!=0)
    {
        int i=n%10;
        c++;
        n=n/10;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}