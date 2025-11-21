#include<stdio.h>
int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks>=60)
    {
        printf("First class");
    }
    else 
    if(marks>=35)
    {
        printf("second class");
    }
    else
    {
        printf("Failed");
    }
}