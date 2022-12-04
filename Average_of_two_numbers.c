#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float z;
    z=(x+y)/2.0;
    printf("Average of %d and %d is: %0.2f",x,y,z);
}