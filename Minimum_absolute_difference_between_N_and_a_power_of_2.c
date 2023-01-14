#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,min=999,t=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=pow(2,i);
        t=abs(n-k);
        if(min>t)
        {
            min=t;
        }
    }
    printf("%d",min);
}