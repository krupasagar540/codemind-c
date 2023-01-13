#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i;
    for(i=a;i<=b;i++)
    {
        int q,c,tc;
        q=i;
        c=0;
        tc=0;
        while(q!=0)
        {
            int r;
            c=c+1;
            r=q%10;
            if(r!=0&&i%r==0)
            {
                tc++;
            }
            q=q/10;
        }
        if(c==tc)
        {
            printf("%d ",i);
        }
    }
}