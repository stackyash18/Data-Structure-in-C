#include<stdio.h>

Enqueue(QUEUE, N, F, R, ITEM)
{
  if(R==N-1)
  {
    print("The queue iis overflowed there is no space to insert elements.");
  }
  
  if(F==-1) //Checking that the queue is empty or not
  {
    F = 0;
    R = 0;
  }
  else
  {
    R = R + 1;
  }

  QUEUE[R] = ITEM;
}