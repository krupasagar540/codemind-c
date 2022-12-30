#include<stdio.h>
int main()
{
    int ti,i;
    scanf("%d",&ti);
    for(i=1;i<=ti;i++)
    {
        int n,r,q,s=0;
        scanf("%d",&n);
        q=n;
        while(q!=0)
        {
            r=q%10;
            q=q/10;
            s=s*10+r;
        }
        if(s==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}