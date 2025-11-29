#include<stdio.h>
void main()
{
    int num1,num2,operation;
    
    do {
        printf("Enter any two numbers:\n");
        scanf("%d %d",&num1,&num2);
    printf("Select any arithmetic operation: \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division for Quotient\n");
    printf("5.Division for Reminder\n");
    printf("6.Exit \n");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1:
        printf("Sum of %d and %d: %d \n",num1,num2,num1+num2);
        break;
        case 2:
        printf("Difference of %d and %d: %d\n",num1,num2,num1-num2);
        break;
        case 3:
        printf("Product of %d and %d: %d\n",num1,num2,num1*num2);
        break;
        case 4:
        printf("Quotient of %d and %d: %d\n",num1,num2,num1/num2);
        break;
        case 5:
        printf("Reminder of %d and %d: %d\n",num1,num2,num1%num2);
        break;
        case 6:
        printf("Thank You for using the Calculator,Good Bye!\n");
        break;
        default:
        printf("Invalid Operation!\n");
        break;
        
        
    }
    


        
    }while(operation!=6);
    


}
