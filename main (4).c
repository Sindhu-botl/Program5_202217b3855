#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 5

int queue[QUEUE_SIZE];
int front = 0;
int rear = -1;

void insert() {
    if (rear < QUEUE_SIZE - 1) {
        int element;
        printf("Enter the element: ");
        scanf("%d", &element);
        rear++;
        queue[rear] = element;
        printf("Element inserted: %d\n", element);
    } else {
        printf("Queue is full.\n");
    }
}

void delete() {
    if (rear < front) {
        printf("Queue is empty.\n");
    } else {
        int deletedElement = queue[front];
        printf("Deleted Element is: %d\n", deletedElement);
        for (int i = 0; i < rear; i++) {
            queue[i] = queue[i + 1];
        }
        rear--;
    }
}

void display() {
    if (rear < front) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue Elements are:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    int choice;
    while (1) {
        printf("\nQueue using Array\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter the Choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}
