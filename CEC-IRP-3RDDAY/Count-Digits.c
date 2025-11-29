#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter any number:");
    scanf("%d",&num);
    printf("Given Number:%d\n",num);
    if(num==0){
        count=1;
    }
    while(num>0)
    {
        count++;
        num=num/10;
    }
    printf("The number of digits in the given number:%d",count);
}