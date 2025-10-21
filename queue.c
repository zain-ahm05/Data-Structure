#include <stdio.h>
#define MAX 5  // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;

// Function to insert an element (enqueue)
void enqueue(int value) {
    if (rear == MAX - 1)
        printf("Queue is Full (Overflow)\n");
    else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("%d inserted into the queue\n", value);
    }
}

// Function to delete an element (dequeue)
void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue is Empty (Underflow)\n");
    else {
        printf("%d deleted from the queue\n", queue[front]);
        front++;
        if (front > rear)  // Reset queue when all elements are removed
            front = rear = -1;
    }
}

// Function to display the queue
void display() {
    if (front == -1)
        printf("Queue is Empty\n");
    else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

// Function to show the front element
void peek() {
    if (front == -1)
        printf("Queue is Empty\n");
    else
        printf("Front element is: %d\n", queue[front]);
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display\n");
        printf("4. Peek (Front Element)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
