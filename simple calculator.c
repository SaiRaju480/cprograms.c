#include<stdio.h>
void main()
{
    int a,b;
    char ch;
    printf("enter a,b values and operation");
    scanf("%d%d %c",&a,&b,&ch);
    switch(ch)
    {
    case'+':printf("The addition is %d",a+b);
    break;
    case'-':printf("The subtraction is %d",a-b);
    break;
    case'*':printf("The multiplication is %d",a*b);
    break;
    case'%':printf("The division(remainder) is %d",a%b);
    break;
    case'/':printf("The division(quotient) is %d",a/b);
    break;
    default:printf("Invalid output");
    break;
}
}
