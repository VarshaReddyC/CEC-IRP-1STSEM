#include<stdio.h>
#include<string.h>
void main()
{
 
 char name[20],fullname[20],completename[20];
 printf("Enter your first name:");
 scanf("%s",&name);
 printf("Your first name is %s \n",name);
 //not safe(no limit)
 printf("Enter your full  name:");
 getchar();
 gets(fullname);
 printf("Your name is %s\n",fullname);
 printf("Enter your full name again:\n");
 //Syntax for fgets;
 //fgets(array,sizeof(array),stdin)
 printf("Size of completename array is%d\n",sizeof(completename));
 fgets(completename,sizeof(completename),stdin);
 printf("Your name is %s\n",completename);
}