#include<stdio.h>
int main()
{
    int max,min,i;
    scanf("%d%d",&min,&max);
    for(i=max;i>=min;i--)
    {
        printf("%d ",i);
    }
}