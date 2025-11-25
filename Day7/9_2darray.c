#include<stdio.h>
int main()
{
    int marks[2][2];
    printf("Enter the Elements:\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d",&marks[i][j]);
        }
    }
    printf("The even elements are:\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            if (marks[i][j] % 2 == 0)
                printf("%d ", marks[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}