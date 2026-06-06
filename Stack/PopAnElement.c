#include<stdio.h>
#include<stdlib.h>

int Y, TOP;
POP(S,N,TOP)
{
  if(TOP==-1)
  {
    printf("The stack is underflow, their is no element to be popped.\n");
    return;
  }
  else
  {
    Y = S[TOP];
    TOP = TOP-1;
  }
}