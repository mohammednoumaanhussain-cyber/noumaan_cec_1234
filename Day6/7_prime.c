#include <stdio.h>
int main()
{
    int num=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int isPrime=1; // Assume number is prime
    if(num<=1){
        isPrime=0; 
    }
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            isPrime=0; 
            break;
        }
    }
    if(isPrime)
        printf("it is a prime number\n");
    else{
        printf("it is not a prime number\n");
}
}