#include<stdio.h>
#include<string.h>
void main()
{
    char fullname[20],copyname[20],fname[20],lname[20],lastname[20];
    printf("Enter your name:");
        fgets(fname,sizeof(fname),stdin);
printf("Your first name is%s\n",fname);
printf("Enter your last name");
        fgets(lname,sizeof(lname),stdin);
        printf("Your last name is%s\n",lname);
        //String Concatenation
        strcat(fullname,fname);
        strcat(lastname,lname);
        printf("Your full name is%s\n",fullname);
        //String Length
        printf("Your name contains %d characters \n",strlen(fullname));
        //String Copy
        strcpy(copyname,fullname);
        printf("Copied name:%s\n",copyname);











    }