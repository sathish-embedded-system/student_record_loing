#include "headder.h"
/*************************** roll number start **********************************************************/
void delete(st **ptr,char op) 
{
        if((op =='r')||(op =='R'))
        {
                int n;
                pf("enter roll number: " );
                scanf("%d",&n);
        if(*ptr == 0)
	{
        printf("Empty linked list, nothing to delete\n");
        return;
        }

        st *temp = *ptr, *prv;
        while(temp != 0)
        {
                if(temp->roll == n)
                {
                        if(temp == *ptr)
                        *ptr = temp->next;
                        else
                        prv->next = temp->next;

                        free(temp);
                        temp = NULL;
			pf("..................Data delete.............");
                        return;
                }
                else
                {
                        prv = temp;
                        temp = temp->next;
                }
        }
                printf("The data doesn't exist to delete\n");
        }
/*************************** roll number end **********************************************************/
/*************************** Name starting **********************************************************/
        if((op =='n')||(op =='N'))
        {
        
                char n[20];
                pf("enter name: ");
                scanf("%s",n);
        if(*ptr == 0)
       	{
        printf("Empty linked list, nothing to delete\n");
        return;
        }

        st *temp = *ptr, *prv;
        while(temp != 0)
        {
                if(!(strcmp(temp->name, n)))
                {
                        if(temp == *ptr)
                        *ptr = temp->next;
                        else
                        prv->next = temp->next;

                        free(temp);
                        temp = NULL;
			pf("..................Data delete.............");
                        return;
                }
                else
                {
                        prv = temp;
                        temp = temp->next;
                }
        }
                printf("The data doesn't exist to delete\n");


      }	

/*************************** Name End **********************************************************/


}
