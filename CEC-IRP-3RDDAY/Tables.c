#include<stdio.h>
void main()
{
    int num,i=1;
    printf("Enter the number to print the tables:");
    scanf("%d",&num);
    printf("The tables for the number are as follows:\n");
    while(i<=10)
    {
        printf("%d x %d = %d\n",num,i,num*i);
        i++;
    }
}
//Tracing
// num=5,i=1
// Step 1 :i<=10=>1
//num x i=num * i=>5x1=5*1=>5
//i++=1++
// Step 2 :i<=10=>2
//num x i=num * i=>5x2=5*2=>10
//i++=2++
// Step 3 :i<=10=>3
//num x i=num * i=>5x3=5*3=>15
//i++=3++
// Step 4 :i<=10=>4
//num x i=num * i=>5x4=5*4=>20
//i++=4++
// Step 11 :i<=10=>11-F
//Stop


