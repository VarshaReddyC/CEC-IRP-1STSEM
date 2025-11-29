#include<stdio.h>
void main()
{
    int num1,num2;
    char operator;
    printf("Enter any 2 numbers:");
    scanf("%d %d",&num1,&num2);
    printf("Choose the operator(+,-,*,/,%):\n");
    scanf(" %c",&operator);
    switch(operator)
    {
        case '+':
        printf("Sum of %d and %d: %d",num1,num2,num1+num2);
        break;
        case '-':
        printf("Difference of %d and %d: %d",num1,num2,num1-num2);
        break;
        case '*':
        printf("Product of %d and %d: %d",num1,num2,num1*num2);
        break;
        case '/':
        printf("Quotient of %d and %d: %d",num1,num2,num1/num2);
        break;
        case '%':
        printf("Reminder of %d and %d: %d",num1,num2,num1%num2);
        break;
        default:
        printf("Invalid Operation!");
        break;
        
        
    }
}