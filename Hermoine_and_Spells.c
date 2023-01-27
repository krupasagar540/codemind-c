#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x<y&&x<z)
    {
    printf("%d",y+z);
    }
    else if(y<x && y<z)
    {
    printf("%d",x+z);
    }
    else
    {
    printf("%d",x+y);
    }
}