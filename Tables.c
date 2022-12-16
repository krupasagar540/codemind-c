#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    int i;
    for(i=1;i<=r;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
}