#include "headder.h"

/*************************** roll number************************************/
void modify_roll(st**ptr)
{
	st *temp=*ptr;
        int new;
	int n;
        pf("Enter old roll number: ");
        scanf("%d",&n);
         while(temp != 0)
	 {

              if(temp -> roll == n)
	      {
                  pf("\nEnter new roll number: ");
                  scanf("%d",&new);
		  temp -> roll = new;
		  pf("New roll number updated........");
                         return;
	     }
	      else
		      temp=temp->next;		    
	 }
	 pf("old roll number NOT match");

}
/*************************** Roll  end ****************************************************************/


/*************************** name starting  **********************************************************/
void modify_name(st**ptr)
{       
	st*temp=*ptr;
        int count = search(*ptr,'n');
        if(count == 0)
        {
                pf("name not match");
                return;
        }

        if(count == 1)
        {
                char n[20];
                pf("Enter old name: ");
                scanf("%s",n);


                 while(temp!=0)
                      {
                                if((strcmp(temp->name,n))==0)
                                 {
                                     char new_name[20];
                                     pf("Enter new name: ");
                                      scanf("%s",new_name);

                                     strcpy( temp->name, new_name);
                                       pf("New name updated.........");
                                       return;

                                   }
                                  else
                                   {
                                       temp=temp->next;
                                    }
                         }
        }

        if(count > 1)
        {
                pf("the name has saved more then one time\n");
	st *temp=*ptr;
        int new;
        int n;
        pf("Enter roll number: ");
        scanf("%d",&n);
         while(temp != 0)
         {

              if(temp -> roll == n)
              {
                 		      char new_name[20];
                                     pf("Enter new name: ");
                                      scanf("%s",new_name);

                                      strcpy (temp->name, new_name);
                                       pf("New name updated.........");
                                       return;

             }
              else
                      temp=temp->next;
         }

        }
        pf("roll number not match");

        
 }
/*************************** name  end ****************************************************************/

/*************************** Mark starting  **********************************************************/
void modify_mark(st**ptr)
{
	  st*temp=*ptr;
        int count = search(*ptr,'m');
        if(count == 0)
        {
                pf("mark not match");
                return;
        }

        if(count == 1)
        {
                int n;
                pf("Enter old mark: ");
                scanf("%d",&n);

                 while(temp!=0)
                      {
                                if(temp -> mark == n)
                                 {
                                        float new_mark;
                                     pf("Enter new_mark: ");
                                      scanf("%f",&new_mark);

                                     temp-> mark = new_mark;
                                       pf("New mark updated.........");
                                       return;

                                   }
                                  else
                                   {
                                       temp=temp->next;
                                    }
                         }
        }

        if(count > 1)
        {
                pf("the mark has saved more then one time\n");
        st *temp=*ptr;
        int n;
        pf("Enter roll number: ");
        scanf("%d",&n);
         while(temp != 0)
         {

              if(temp -> roll == n)
              {
                                      float new_mark;
                                     pf("Enter new mark: ");
                                      scanf("%f",&new_mark);
                                     temp-> mark = new_mark;                                                     
                                       pf("New mark  updated.........");
                                       return;

             }
              else
                      temp=temp->next;
         }

        }
        pf("roll mark  not match");


}

/*************************** Mark  end ****************************************************************/


