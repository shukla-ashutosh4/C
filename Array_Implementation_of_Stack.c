#include <stdio.h>
#define MAX_SIZE 100 // Define the maximum size of the stack

// Define a structure for the stack
struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// Initialize the stack
void init(struct Stack *stack) {
    stack->top = -1; // Set top to -1 to indicate an empty stack
}

// Check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Push an element onto the stack
void push(struct Stack *stack, int element) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = element; // Increment top and insert element
}

// Pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1; // Return a sentinel value to indicate underflow
    }
    return stack->arr[stack->top--]; // Decrement top and return popped element
}

// Peek at the top element of the stack
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; // Return a sentinel value to indicate empty stack
    }
    return stack->arr[stack->top]; // Return the top element without removing it
}

int main() {
    struct Stack stack;
    init(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Top element: %d\n", peek(&stack)); 

    printf("Popped element: %d\n", pop(&stack)); 
    printf("Popped element: %d\n", pop(&stack)); 

    printf("Top element: %d\n", peek(&stack)); 

    return 0;
}
