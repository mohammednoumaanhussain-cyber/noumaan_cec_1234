#include<stdio.h>
int main()
{
    int num,duplicate,reverse=0,digits=0;
    printf("Enter a number:");
    scanf("%d",&num);
    duplicate = num;
    while (num!=0)
{
    digits = num%10;
    reverse = reverse*10+digits;
    num =num/10;
}
if(duplicate == reverse)
{
    printf("Pallondrome number \n");
}
else
    {
        printf("Not a pallondrome number          \n");
    }
    
}