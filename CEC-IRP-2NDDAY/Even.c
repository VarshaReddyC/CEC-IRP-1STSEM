#include<stdio.h>
void main()
{
    int num,i=1,j=1;
  printf("How many even numbers need to be printed:");
  scanf("%d",&num);
  printf("The even numbers till %d are as follows:\n",num);
//syntax:
//while(condition){
//some statements
//increment or decrement//}

  while(i <= num)
  {
    if(i % 2 == 0)
   {
printf("%d \n",i);
  }
i++;
}
printf("even numbers in reverse orde:\n");
while(num>=j)
if(num%2==0)
{
  prinf("%d\n",num);
}
num--;
}
//tracing