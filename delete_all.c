#include "headder.h"
void delete_all(st**ptr)
{
   st* temp;
   while(*ptr != 0)
   {
      temp = *ptr;
      *ptr = temp->next;
      free(temp);
   }
}

