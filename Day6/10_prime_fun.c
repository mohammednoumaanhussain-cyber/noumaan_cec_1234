#include<stdio.h>
void fact(int num);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    fact(number);
    fact(number);
    fact(number);   
}
void fact(int number)
{
    int isPrime=1;
    