#include<stdio.h>
int main()
{
    int N,i,sum=0;
    int sq1=0;
    int sq2=0;
    int diff=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+(i*i);
        sq1=sq1+i;
    }
    sq2=sq1*sq1;
    diff=sq2-sum;
    printf("%d",diff);
}