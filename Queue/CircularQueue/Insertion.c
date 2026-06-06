Enqueue(QUEUE, N, F, R, ITEM)
{
  if((F==0 && R=N-1)||(F==R+1))
  {
    print("The queue is  overflowed.\n");
  }

  if(F==-1)
  {
    F=0;
    R=0;
  }
  else
  {
    R=(R+1)%N;
  }
  QUEUE[R]=ITEM;
}