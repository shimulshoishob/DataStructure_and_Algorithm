#include <stdio.h>
#define CAPACITY 3
int top = -1;
int queue[CAPACITY];

void enqueue(int item) {
  if (top < CAPACITY - 1) {
    top++;
    queue[top] = item;
    printf("Successfully add item : %d \n", item);
  } else {
    printf("Exception, The Queue is full.\n");
  }
}

// normal dequeue
int normalDequeue() {
  if (top >= 0) {
    int val = queue[0];
    for (int i = 0; i < (int)sizeof(queue); i++) {
      queue[i] = queue[i + 1];
    }
    top--;
    return val;
  } else {
    printf("Exception,The normal Queue is empty. \n");
    return -1;
  }
}

int showItem() {
  int val = queue[0];
  return val;
}

int main() {

  printf("Hello, my Queue is ready to work.\n");
  normalDequeue();
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  printf("return item from showItem: %d \n", showItem());
  printf("return item from dequeue: %d \n", normalDequeue());
  enqueue(50);
  printf("return item from showItem: %d \n", showItem());

  return 0;
}