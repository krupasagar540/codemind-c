#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    double s,v;
    s=6*n*n;
    v=n*n*n;
    printf("Surface area = %.2f and Volume = %.2f",s,v);
}