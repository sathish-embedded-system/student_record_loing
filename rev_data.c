#include "headder.h"
void rev_data(st* ptr)
{
        int i,j,c = count(ptr);
        int size = sizeof(st)-sizeof(st*);
        st* p1 = ptr,*p2;
        st temp;
        for(i=0;i<c/2;i++)
        {
                p2 =  ptr;
                for(j=0;(j<c-1-i);j++)
                        p2=p2->next;
                memcpy(&temp,p1,size);
                memcpy(p1,p2,size);
                memcpy(p2,&temp,size);
                p1=p1->next;

        }
	pf("Data reve.........Comple.... \n");
}

