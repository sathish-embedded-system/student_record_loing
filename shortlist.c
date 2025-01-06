#include "headder.h"
void shortlist_mark(st* ptr)
{
	st*p1=ptr;
	st*p2= p1->next;

	     int i,j,c = count(ptr);
             int size = sizeof(st)-(sizeof(st*));
            st temp;
             for(i=0 ; i < c ;i++)
            {
             st*p1 = ptr;
             st*p2 = p1->next;
                    for(j=0 ; j < c-1-i ; j++)
                    {
                            if(p2 -> mark > p1 -> mark)
                            {
                                    memcpy(&temp,p1,size);
                                    memcpy(p1,p2,size);
                                    memcpy(p2,&temp,size);
                            }
                            p1=p2;
                            p2 = p1 -> next;


                    }
            }
             pf("marks short list complet.....d\n");


}

void shortlist_name(st* ptr)
{
	st*p1=ptr;
	st*p2= p1->next;

             int i,j,c = count(ptr);
             int size = sizeof(st)-(sizeof(st*));
            st temp;
             for(i=0 ; i < c ;i++)
            {
             st*p1 = ptr;
             st*p2 = p1->next;
                    for(j=0 ; j < c-1-i ; j++)
                    {
                            if(p1 -> name > p2 -> name)
                            {
                                    memcpy(&temp,p1,size);
                                    memcpy(p1,p2,size);
                                    memcpy(p2,&temp,size);
                            }
                            p1=p2;
                            p2 = p1 -> next;


                    }
            }
             pf("Name short list complet.....d\n");


}

