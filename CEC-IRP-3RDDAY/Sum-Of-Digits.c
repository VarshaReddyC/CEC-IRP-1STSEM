#include<stdio.h>
void main()
{
    int num , sum=0;

    printf("Enter any number:");
    scanf("%d" ,&num);

printf("Original Number:%d\n",num);
while(num>0)
{
    sum=sum+num % 10;
    num=num/10;
}
printf("Sum Of the given digits:%d",sum);
}
//tracing
//num=13579
//step1 : 13579 > 0 -T
//s = s + n % 10 => s = 0 + 13579 % 10=> 0 + 9=9
//n =13579/10 => 1357
//step2 : 1357 > 0 -T
//s = 9 + 1357 % 10 => s = 9 + 1357 % 10=> 9 + 7 =16
//n =1357/10 => 1357
//step3 : 135> 0 -T
//s = s + n % 10 => s = 0 + 13579 % 10=> 1 + 9=9
//n =135/10 => 135
//step4 : 13 > 0 -T
//s = s + n % 10 => s = 0 + 13579 % 10=> 0 + 9=9
//n =13579/10 => 1357
//Ctrl F-select 
//Ctrl H-replace

