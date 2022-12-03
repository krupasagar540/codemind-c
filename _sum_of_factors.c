#include<stdio.h>
int main()
{
    int a,n,i,s=0;
    scanf("%d",&a);
    n=a;
    for(i=1;i<=n;i++)
   {
     if(a%i==0 && a!=i)
     {
         s+=i;
     }
    }
   printf("%d",s);
}