#include<stdio.h>
int main()
{
    int arr[10],n,mp,i,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    i=0;
    mp=arr[i];
    while(i<n)
    {
        if(mp<arr[i])
        mp=arr[i];
        i++;
    }
    while(1)
    {
        i=0;
        count=0;
        while(i<n)
        {
            if(arr[i]%mp==0)
            count++;
            i++;
        }
        if(count==n)
        break;
        else
        mp--;
    }
    printf("%d",mp);
    getchar();
    return 0;
}