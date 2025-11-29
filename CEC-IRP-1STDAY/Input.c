#include<stdio.h>
void main()
{
    int num;
    float decimal;
    char symbol;
    printf("Enter any integer value:");
    //For taking the input we scanf
    //=&-ampersand,it will store the address of the variable
    scanf("%d",&num);
     printf("Enter any decimal value:");
     scanf("%f",&decimal);
     printf("Enter any symbol:");
     //there is space %c to provide the output
     scanf( " %c" ,&symbol);
     
     printf("You've given %d for Integer,%f for Float,%c for Symbol",num,decimal,symbol);
}