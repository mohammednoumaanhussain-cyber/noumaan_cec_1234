#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head, *newNode, *tail;
int main()
{
    head = NULL;
    int ch = 1;
    while (ch)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter a number: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = newNode;

            tail = newNode;
        }
        else
        {

            tail->next = newNode;
            tail = newNode;
        }
        newNode->next = head;
        printf("Do you want to continue(0|1): ");
        scanf("%d", &ch);
    }
    printf("Elments: \n");
    tail = head;

    while (tail->next != head)
    {
        printf("%d\n", tail->data);
        tail = tail->next;
    }
    printf("%d\n", tail->data);
    printf("\n");
    return 0;
}
