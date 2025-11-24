#include<stdio.h>
void add();
int main()
{
 printf("Inside main function \n");
 add();
 add();
 add();   
}
void add()
{
    printf("Addition is: %d \n",50+70);
}