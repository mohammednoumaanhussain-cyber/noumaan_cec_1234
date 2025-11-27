#include<stdio.h>
int main()
{
int arr[50],pos=0,ele=0,size=0;
printf("Enter size of array: ");
scanf("%d",&size);
if(size>50 || size<=0)
{
    printf("Invalid array size\n");
}
else
{
    printf("Entered elements are:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&ele);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            printf("index is : %d\n",i);
           break; 
        }
    }
}
}