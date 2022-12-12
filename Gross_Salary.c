#include<stdio.h>
int main()
{
    int bs,da,hra;
    float gs;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        da=bs*0.8;
        hra=bs*0.2;
    }
    else if(bs<=20000)
    {
        da=bs*0.9;
        hra=bs*0.25;
    }
    else 
    {
        da=bs*0.95;
        hra=bs*0.3;
    }
    gs=bs+da+hra;
    printf("%.2f",gs);
}