#include<stdio.h>

Enqueue(QUEUE, N, F, R, ITEM)
{
  if(F==-1)
  {
    print("The Queue is underflowed.\n ");
  }
  ITEM=QUEUE[F];

  if(F==R)
  {
    F=-1;
    R=-1;
  }
  else
  {
    F=(F+1)%N;
  }
  return ITEM;
}