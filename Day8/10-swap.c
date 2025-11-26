#include <stdio.h> // Include standard input-output header file
int main() // Main function
{ // Start of main function
    int arr[5]={10,20,30,40,50}; // Declare and initialize an array of integers
int *ptr=arr;  // Pointer to the first element of the array
printf("Array elements using pointers:\n");  // Print message
for(int i=0;i<=4;i++) // Loop through the array elements
{ // Start of loop
    printf("%d ",*(ptr)); // Print the value pointed to by the pointer 
    ptr++; // Move the pointer to the next element
} // End of loop
} // End of main function