#include<stdio.h>
int add(int num1, int num2);
int sub(int num1, int num2);
int main()
{
    int res1=add(5,10);
    int res2=add(20,30);
    int res3=add(40,50);
    int res4=add(60,70);
    int res5=sub(100,50);
    int res6=sub(80,30);
    printf("res1=%d\n",res1);
    printf("res2=%d\n",res2);
    printf("res3=%d\n",res3);
    printf("res4=%d\n",res4);
    printf("res5=%d\n",res5);
    printf("res6=%d\n",res6);
}
int add(int num1, int num2)
{
    return num1+num2;
}   
int sub(int num1, int num2)
{
    return num1-num2;
}
