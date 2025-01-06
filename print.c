#include "headder.h"

void print(st* ptr)
{
        while(ptr!=0)
        {
      pf("%d    %s    %f\n",ptr->roll,ptr->name,ptr->mark);
      ptr=ptr->next;
        }
}
