#include<stdio.h>
#include<stdlib.h>
#define N 5
int q[N], front = -1, rear = -1;
void enqueue() {
    int ele;
    printf("Enter the element to be inserted\n");
    scanf("%d", &ele);

    if (rear == N - 1) {
        printf("Queue overflow\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        q[rear] = ele;
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Deleted element is %d\n", q[front]);
        front++;

        if (front > rear) {
            front = rear = -1; // Reset front and rear when the queue becomes empty
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue is:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", q[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("The peek element is %d\n", q[front]);
    }
}

int main() {
    int choice;
    while (1) {
        printf("Enter the choice\n");
        printf("1 for insertion\n2 for deletion\n3 for display\n4 for peek\n5 exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enqueue();
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
            case 5: exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}