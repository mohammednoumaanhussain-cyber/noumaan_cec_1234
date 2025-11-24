#include<stdio.h>
int main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
int count =0;
while(num!=0)
{
    int digit = num %10;
count++;
num=num/10;
}
printf("No of digits is: %d \n ",count);
}