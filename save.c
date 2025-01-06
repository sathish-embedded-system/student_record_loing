#include "headder.h"
void  save (st* ptr)
{
	char file_name[20];
	pf("Enter file name with exention (for example:- .txt  .pdf)\n\t\tEnter: ");
	scanf("%s",file_name);

  FILE *fp=fopen(file_name,"w");
  while(ptr != 0)
  {
     fprintf(fp,"%d  %s  %f\n",ptr->roll,ptr->name,ptr->mark);
     ptr=ptr->next;
  }
}

