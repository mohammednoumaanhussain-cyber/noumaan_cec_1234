#include<stdio.h>
void mul(int a, int b);
int main()
{
    mul(20,40);
    mul(50,60);
}
void mul(int a, int b)
{
    printf("Multiplication is: %d \n",a*b);
}