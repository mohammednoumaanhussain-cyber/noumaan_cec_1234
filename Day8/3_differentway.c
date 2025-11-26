#include<stdio.h>
int main()
{
    int a=30;
    int *ptr=&a;
    printf("value of a =%d \n",a);
    printf("value of a =%d \n",*ptr);
    printf("value of a =%d \n",*(&a));
    printf("value of a =%d \n",*(*(&ptr)));
    printf("value of a =%d \n",*(&(*(&a))));

    printf("value of ptr =%p \n",ptr);
    printf("value of ptr =%p \n",&a);
    printf("value of ptr =%p \n",*(&ptr));
    printf("value of ptr =%p \n",&(*(&a)));
    printf("value of ptr =%p \n",&(*(&a)));
    }