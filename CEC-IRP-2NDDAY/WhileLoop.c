#include<stdio.h>
void main()
{
    int num,i=0;
    printf("Enter how many numbers need to be printed:");
    scanf("%d",&num);
    printf("Numbers are as follows: \n");
    while(i<num)
    {
        printf("%d\n",i);
        i++;
    }
}
//Tracing:
//Initial value:i=1,num=5
//i<=num
//Step1:1<=5=>
//print i=>1
//i++
//Step2:2<=5=>
//print i=>2
//1 2
i++=2++
//Step3:3<=5=>
//print i=>3
//1 2 3
i++=3++
//Step4:4<=5=>
//print i=>4
//1 2 3 4
i++=4++