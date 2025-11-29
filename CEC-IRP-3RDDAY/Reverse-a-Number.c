#include<stdio.h>
void main()
{
    int num,rev=0,rem=0;
    printf("Enter any Number:");
    scanf("%d",&num);
    printf("Original Number: %d\n",num);
    while(num>0)
    {
         rem= num%10;    
        rev= rev * 10 + rem;
        //rev=rev*10+num%10;
        num= num / 10;
    }
printf("Reversed number:%d",rev);
//tracing:
//num=566,rem=0,rev=0
//Step1: 566>0-T
//rem=566 % 10=6
// rev= 0 * 10 + 6=6
//num=566/10=6
//  rev=6
//Step2:56>0-T
//rem=56%10=6
//Step 1 :num>0=>2025>0-T
//rem=num%10=>2025%10=>5
//rev=rev*10+rem=>0*10+5=>5
//num=num/10=>2025/10=>202

//Step 2 :num>0=>202>0-T
//rem=num%10=>202%10=>2
//rev=rev*10+rem=>5*10+2=>52
//num=num/10=>202/10=>20
//Step 3 :num>0=>20>0-T
//rem=num%10=>20%10=>0
//rev=rev*10+rem=>5*10+2=>52
//num=num/10=>20/10=>20



}