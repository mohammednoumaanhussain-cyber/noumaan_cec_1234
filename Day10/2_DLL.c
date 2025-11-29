#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head, *newNode, *curr;
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
            curr = newNode;
        }
        else
        {
            curr->next = newNode;
            curr->prev = curr;
            curr = newNode;
        }
        printf("Do you want to continue(0|1): ");
        scanf("%d", &ch);
    }
    printf("Elments: \n");
    curr = head;
    while (curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
    printf("\n");
    return 0;
}
