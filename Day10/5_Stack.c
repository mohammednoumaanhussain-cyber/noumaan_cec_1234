 #include <stdio.h>

int stack[100];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int choice;
    while (1)
    {
        printf("Enter a choice : \n");
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Display  \n");
        printf("4. Exit \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid choice \n");
            break;
        }
    }
}

void push()
{
    int value;
    if (top == 99)
    {
        printf("Stack Overflow \n");
    }
    else
    {
        printf("Enter the value to be pushed : \n");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow \n");
    }
    else
    {
        printf("Popped element is : %d \n", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty \n");
    }
    else
    {
        printf("Stack elements are : \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d \n", stack[i]);
        }
    }
}