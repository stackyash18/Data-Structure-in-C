#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

typedef struct 
{
  
  int arr[MAX_SIZE];
  int top;
} stack;

void initialize(stack *s)
{
  s->top = -1;
}
void isEmpty(stack *s)
{
  return s->top == -1;
}

int isFull(stack *s)
{
  return s->top ==  MAX_SIZE - 1;
}

