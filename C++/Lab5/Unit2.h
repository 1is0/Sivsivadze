//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#define QMAX 1000

class queue
{
public:
  int qu[QMAX];
  int rear = 0, frnt;
	queue()
	{
	frnt = 1;
	rear = 0;
       return;
	}
	int getValue()
	{
        return qu[0];
    }
   void insert(int x)
	{
	  if(rear < QMAX-1)
	  {
		rear++;
		qu[rear]=x;
	  }
	 }
	int isEmpty()
	 {
	  if(rear < frnt)    return 1;
	  else  return 0;
	 }

int removex() {
  int x, h;
  if(isEmpty()==1) {
    return 0;
  }
  x = qu[frnt];
  for(h = frnt; h < rear; h++)
  {
	qu[h] = qu[h+1];
  }
  rear--;
  return x;
}
};


//---------------------------------------------------------------------------
#endif
