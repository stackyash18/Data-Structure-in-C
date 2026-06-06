#include<stdio.h>
#include<stdlib.h>


int TOP = 5;
PUSH(S,N,TOP,x)
{
  if(TOP==N-1)
  {
    printf("The stack is overflow and the element cannot be pushed.\n");
   return;
  }
  else
  {
    TOP = TOP + 1;
    S[TOP] = x;
    return;
  }
}