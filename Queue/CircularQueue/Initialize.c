#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 15

typedef struct
{
  int arr[MAX_SIZE];
  int front;
  int rear;
}CircularQueue;

void intialize(CircularQueue *q)
{
  q->front=-1;
  q->rear=-1;
}