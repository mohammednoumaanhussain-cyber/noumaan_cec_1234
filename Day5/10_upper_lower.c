#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Charecter:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("Capital letter");
    }
    else
    if(ch>=97 && ch<=122)
    {
        printf("Small letters");
    }

}