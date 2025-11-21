#include <stdio.h>
int main()
{
{
    int n;
    printf("enter number you want to print: \n");
    scanf("%d", &n);
    int i = 1;
    printf("the numbers are: \n");
    do
    {
        printf("%d \n", i);
        i++;
    }
    while (i <= n)
        ;
}
}