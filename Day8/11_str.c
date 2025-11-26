#include <stdio.h> 
#include <string.h>
struct student
{
 char name[50];
 int roll_no;
 int marks;   
}st1,st2;
int main()
{
    strcpy(st1.name,"Noumaan");
    st1.marks=95;
    st1.roll_no=1234;
    printf("Student details:\n");
    printf("Name: %s\n",st1.name);
    printf("Roll No: %d\n",st1.roll_no);
    printf("Marks: %d\n",st1.marks);

    strcpy(st2.name,"Chakka Saad");
    st2.marks=95;
    st2.roll_no=1234;
    printf("Student details:\n");
    printf("Name: %s\n",st2.name);
    printf("Roll No: %d\n",st2.roll_no);
    printf("Marks: %d\n",st2.marks);
}