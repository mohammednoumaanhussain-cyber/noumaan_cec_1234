#include<stdio.h>
int sum_of_n(int n);
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    int res=sum_of_n(num);
    printf("%d", res); 
}

int sum_of_n(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n + sum_of_n(n-1);
}