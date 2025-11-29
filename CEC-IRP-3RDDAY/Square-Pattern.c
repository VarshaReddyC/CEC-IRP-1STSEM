#include<stdio.h>
void main()
{
    int rows,i,j;
printf("Enter number of rows:");
scanf("%d",&rows);
printf("Square Pattern:\n");
//for(initialization;condition;increment/decrement)
//Nested for loop
for(int i=1;i<=rows;i++){
for(int j=1;j<=rows;j++){
    //if we print a symbol,it will print
    //if we print a j value,we will get numbers in horizontal pattern
    //if we print a i value, we will get numbers in vertical pattern
//printf("*");  
printf("%d",j);
//printf("%d",i);
}
printf("\n");
}
}
//Tracing:
//i=1,rows=3
//Step 1:i<=rows=>1<=3-T
//j=1,j<=rows,1<=3-T
//*
//Step 2:i<=rows=>1<=3-T
//j=1,j<=rows,2<=3-T
//** 
//Step 3:i<=rows=>1<=3-T
//j=1,j<=rows,3<=3-T
//***
//Step 4:i<=rows=>1<=3-T
//j=1,j<=rows,4<=3-F



