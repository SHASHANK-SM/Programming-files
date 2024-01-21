#include<stdio.h>
#include<stdlib.h>
#define N 5

int q[N], front = 0, rear = -1,count=0;

void enqueue() {
    int ele;
    printf("Enter the element to be inserted\n");
    scanf("%d", &ele);

    if (count==N) {
        printf("Queue overflow\n");
    } else {
        printf("Enter the element to be inserted");
        rear=(rear+1)%N;
        q[rear] = ele;
        count++;
    }
}

void dequeue() {
    if (count==0) {
        printf("Queue is empty\n");
    } else {
        printf("Deleted element is %d\n", q[front]);
        front=(front+1)%N;
    }
}

void display() {
    if ( count==0) {
        printf("Queue is empty\n");
    }
    else {
        int i=front;
        printf("Queue is:\n");
        for (int j = 0; j<count; j++) 
        {
            printf("%d ", q[i]);
            i=(i+1)%N;
        }
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