#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of the table: \n");
    scanf("%d", &n);
    printf("Numbers from 1 to 10: \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d \n",n,i, (n*i));
    }
}