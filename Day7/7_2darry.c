#include<stdio.h>
int main()
{
    int marks[2][2];
    marks[0][0]=85;
    marks[0][1]=90;
    marks[1][0]=80;
    marks[1][1]=70;
    printf("1st: %d\n", marks[0][0]);
    printf("2nd: %d\n", marks[0][1]);
    printf("3rd: %d\n", marks[1][0]);
    printf("4th: %d\n", marks[1][1]);
     printf("size of array is: %d\n", sizeof(marks));
     printf("length of array is: %d\n", sizeof(marks)/sizeof(marks[0]));
} 
