#include<stdio.h>
#include<string.h>
int main()
{
char first_name[]="Pavan";
char last_name[]="Gowda";
char Another_name[]="pavan";

printf("length of first_name is: %d\n", strlen(first_name));
printf("Full name is: %s %s\n", first_name, last_name);
printf("%d\n",strcmp(first_name, Another_name));
if(strcmp(first_name, Another_name)==0){
    printf("Strings are equal\n");
}
else{
    printf("Strings are not equal\n");
}
}