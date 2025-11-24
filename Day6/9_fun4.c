#include<stdio.h>
void add();
int sub();
int main()
{
    printf("Inside main function \n");
    sub();
    int res = sub();
    printf("Subtraction is: %d \n",res);    
}

void add()
{
    printf("subtraction is: %d \n",50-70);
}
int sub()
{
    return 100-40;
}
    