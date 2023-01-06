#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]-0<97)
        {
            printf("%c",s[i]-0+32);
        }
        else
        printf("%c",s[i]);
    }
}