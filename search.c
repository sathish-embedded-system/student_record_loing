#include "headder.h"
int search(st*ptr,char ch)
{
	int count=0;

	if((ch =='m')||(ch =='M'))
         {
		 int n;
		 pf("Enter the percentage to find the data: ");
		 scanf("%d",&n);
            while(ptr != 0)
               {
                      if(ptr->mark == n)
                        {
                           count++;
                        }
                           ptr=ptr->next;                       
                  }
			   return count;
	 }
/*******************################**************************************/

	else if((ch =='n')||(ch =='N'))
         {
           char str[20];
           pf("Enter name to find data   ");
	   scanf("%s",str);
            while(ptr != 0)
               {
		       if(!(strcmp(ptr->name,str)))
                        {
                           count++;
                        }
                           ptr=ptr->next;
                  }
                           return count;
         }
         
	else
		pf(" Error --->  int search(st* , ch )");
         
}
