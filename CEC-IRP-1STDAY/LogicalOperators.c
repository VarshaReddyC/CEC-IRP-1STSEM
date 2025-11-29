//Ctrl + ?=//
//AND(&&),OR(||),NOT(!)
//AND(x):
//A B Result
//0 0 0
//0 1 0
//1 0 0
//1 1 1
//------------------
//OR(+):
//A B Result
//0 0 0
//0 1 1
//1 0 1
//1 1 1
//------------------
//NOT(Toggle):
//A Result
// 0  1
// 1  0
#include<stdio.h>
void main()
{
    int number=10;
    int number2=20;
    //if(10>5){T} && if(10<20){T}=>(T&&T=T)
    if(number>5 && number <20)
    {
        printf("%d is b/w 5 & 20\n",number);
    }
    //if(20>5){T}&&if(20<20){F}=>(T&&F=F)
    if(number2>5 && number2 <20)
    {
        printf("%d is b/w 5 & 20\n",number2);
    }
    else
    {
        printf("%d is not in b/w 5 & 20\n",number2);
    }
    //if(20>5){T}||if(20<20){F}=>(T||F=F)
    if(number2>5 || number2 <20)
    {
        printf("%d is b/w 5 & 20\n",number2);
    }
    else
    {
        printf("%d is not in b/w 5 & 20\n",number2);
    }
}
