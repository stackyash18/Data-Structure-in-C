#include<stdio.h>
#include<stdlib.h>

Enqueue(QUEUE, N, F, R, ITEM)
{
  if(R == N-1)
  {
    printf("The queue is overflowed.\.");
    return;
  }
  if(F==-1)
  {
    F = 0;
    R = 0;
  }
  else
  {
    R = R+1;
    QUEUE[R] = ITEM;
  }
}