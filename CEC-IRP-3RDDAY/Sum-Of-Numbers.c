#include<stdio.h>
void main()
{
    int num,sum=0,i=0;
    printf("Enter the Number to find the sum :");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+i;
        //sum +=i;
        i++;

    }
printf("Sum from 0 to %d: %d",num,sum);

}
//Tracing:
//Num=5,sum=0,i=0;
//Step 1:0<=5-T
//sum=sum+i=>0+0=>0
//Step 2:1<=5-T
//sum=sum+i=>0+1=>1
 //Step 3:2<=5-T
//sum=sum+i=>0+2=>2
//Step 2:1<=5-T
//sum=sum+i=>0+1=>1
//Step 7:6>=0-F