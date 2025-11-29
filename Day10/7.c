#include <stdio.h>
#include <string.h>

#define MAX 100   // Maximum number of students in stack

// Structure to store student information
typedef struct {
    int roll;
    char name[50];
    float marks;
} Student;

// Stack structure
typedef struct {
    Student data[MAX];
    int top;
} Stack;

// Function prototypes
void push(Stack *s);
void pop(Stack *s);
void peek(Stack *s);
void display(Stack *s);

int main() {
    Stack s;
    s.top = -1;

    int choice;

    while (1) {
        printf("\n--- Student Management System (Stack) ---\n");
        printf("1. Push Student\n");
        printf("2. Pop Student\n");
        printf("3. Peek Top Student\n");
        printf("4. Display All Students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(&s); break;
            case 2: pop(&s); break;
            case 3: peek(&s); break;
            case 4: display(&s); break;
            case 5: 
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Add (push) a student onto the stack
void push(Stack *s) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow! Cannot add more students.\n");
        return;
    }

    Student st;
    printf("Enter Roll Number: ");
    scanf("%d", &st.roll);
    printf("Enter Name: ");
    scanf(" %[^\n]", st.name);
    printf("Enter Marks: ");
    scanf("%f", &st.marks);

    s->data[++s->top] = st;

    printf("Student added successfully.\n");
}

// Remove (pop) the last student
void pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow! No students to remove.\n");
        return;
    }

    Student st = s->data[s->top--];
    printf("Removed Student: %s (Roll %d)\n", st.name, st.roll);
}

// View the top student
void peek(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty.\n");
        return;
    }

    Student st = s->data[s->top];
    printf("Top Student:\n");
    printf("Roll: %d\n", st.roll);
    printf("Name: %s\n", st.name);
    printf("Marks: %.2f\n", st.marks);
}

// Display all students
void display(Stack *s) {
    if (s->top == -1) {
        printf("No students to display.\n");
        return;
    }

    printf("\n--- Students in Stack ---\n");
    for (int i = s->top; i >= 0; i--) {
        printf("Student %d:\n", i + 1);
        printf("  Roll: %d\n", s->data[i].roll);
        printf("  Name: %s\n", s->data[i].name);
        printf("  Marks: %.2f\n", s->data[i].marks);
    }
}
