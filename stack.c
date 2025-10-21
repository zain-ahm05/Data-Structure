#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct Stack {
    int arr[MAX];
    int top;
} Stack;
void initStack(Stack* stack) {
    stack->top = -1;
}
int isFull(Stack* stack) {
    return stack->top == MAX - 1;
}
int isEmpty(Stack* stack) {
    return stack->top == -1;
}
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1; // Indicating stack is empty
    }
    return stack->arr[stack->top--];
}
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; // Indicating stack is empty
    }
    return stack->arr[stack->top];
}
int main() {
    Stack stack;
    initStack(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printf("Top element is %d\n", peek(&stack));
    printf("Popped element is %d\n", pop(&stack));
    printf("Top element is %d\n", peek(&stack));
    return 0;
}