#include<stdio.h>
#include<stdlib.h>

Dequeue(QUEUE, N, F, R, ITEM)
{
  if(F==-1)
  {
    print("The queue is underflow, the deletion cannot take place.");
  }
  ITEM = QUEUE[F];
  
  if(F==R)
  {
    F=-1;
    R=-1;
  }
  else
  {
    F=F+1;
  }
  return ITEM;
  
}