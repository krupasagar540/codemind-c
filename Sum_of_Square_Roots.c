#include<stdio.h>
#include<math.h>
int main()
{
    int i,m,n;
    float s=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        s=s+sqrt(i);
    }
    printf("%.2f",s);
}
