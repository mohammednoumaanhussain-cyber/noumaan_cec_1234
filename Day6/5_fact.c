#include<stdio.h>
int main() {
int num=0,res=1;
printf("Enter a number: ");
scanf("%d",&num);
while(num>=1)
{
    res=res*num;
    num--;
}
printf("Factorial is: %d\n",res);
}