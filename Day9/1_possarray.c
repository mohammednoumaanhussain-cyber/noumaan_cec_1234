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
        printf("Enter a element to insert: ");
        scanf("%d",&ele);
        printf("Enter position to insert element: ");
        scanf("%d",&pos);
        for(int i=size-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=ele;
        size++;
        printf("Array after insertion:\n"); 
        for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}