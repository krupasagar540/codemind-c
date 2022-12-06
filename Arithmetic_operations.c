#include<stdio.h>
int main()
{
    int x,y,Sum,Difference,Product,Quotient,Remainder;
    scanf("%d%d",&x,&y);
    Sum=x+y;
    Difference=x-y;
    Product=x*y;
    Quotient=x/y;
    Remainder=x%y;
    printf("Sum:%d
",Sum);
    printf("Difference:%d
",Difference);
    printf("Product:%d
",Product);
    printf("Quotient:%d
",Quotient);
    printf("Remainder:%d
",Remainder);

}