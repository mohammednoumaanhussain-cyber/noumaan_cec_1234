#include<stdio.h>
int main()
{
    int marks[5];
    printf("Enter marks of 5 students:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Marks of 5 students are:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d value is= %d \n", i+1, marks[i]);
    }
}   