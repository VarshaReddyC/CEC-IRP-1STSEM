#include<stdio.h>
void main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%2==0)
{
    printf("%d is an Even Number!",num);
}
else{
    printf("%d is a Odd Number!",num);
}
//Nested if-else Statement
if(num>0)
if(num%2==0)
{
    printf("%d is an Even Number!",num);
}
else{
    printf("%d is a Odd Number!",num);
}

else{
    printf("%d is a negative number!",num);
}

}

