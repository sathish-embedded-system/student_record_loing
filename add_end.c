#include"headder.h"
void add_end(st** ptr)
{


    char ch;
    do
    {

       st* temp=(st*) malloc(sizeof(st));
       pf("Enter name and marks\n");
             temp->roll = roll_number++;
       scanf("%s%f",temp -> name,&temp -> mark);

       if(*ptr == 0)
       {
       temp->next=*ptr;
       *ptr=temp;
       }

    else
     {
       st* last = *ptr;
       while(last->next !=0)

       last=last->next;
       temp->next=last->next;
       last->next=temp;

     }
    pf("Do you want enter other student recoard press Y|y or N|n: ");
    scanf(" %c",&ch);
    }while((ch == 'y')||(ch == 'Y'));

    
}

