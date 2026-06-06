#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

typedef struct
{
  int arr[MAX_SIZE];
  int front;
  int rear;
} Queue;

void intialize(Queue *q)
{
  q->front=-1;
  q->rear=-1;
}