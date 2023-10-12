#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Define a structure for the stack
struct Stack {
    struct Node* top;
};

// Initialize the stack
void init(struct Stack *stack) {
    stack->top = NULL;
}

// Check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == NULL;
}

// Push an element onto the stack
void push(struct Stack *stack, int element) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = element;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1; // Return a sentinel value to indicate underflow
    }
    struct Node* temp = stack->top;
    int poppedElement = temp->data;
    stack->top = temp->next;
    free(temp);
    return poppedElement;
}

// Peek at the top element of the stack
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; // Return a sentinel value to indicate empty stack
    }
    return stack->top->data;
}

int main() {
    struct Stack stack;
    init(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(&stack)); // Output: 30

    printf("Popped element: %d\n", pop(&stack)); // Output: 30
    printf("Popped element: %d\n", pop(&stack)); // Output: 20

    printf("Top element: %d\n", peek(&stack)); // Output: 10

    return 0;
}
