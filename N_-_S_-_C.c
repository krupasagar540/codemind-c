#include<stdio.h>
int main()
{
    int a,b,i;
    int sq,cb=0;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        sq=i*i;
        cb=i*i*i;
        printf("%d %d %d
",i,sq,cb);
    }
    
}
