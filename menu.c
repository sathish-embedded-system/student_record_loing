#include "headder.h"
#define pf printf
int main()
{   
    st *hptr=0;
    char op;
    /******************* main_menu  ****************************/
    pf("\t\t\t\t|----------------------------------|\n");
    pf("\t\t\t\t|           MAIN MENU              |\n");
    pf("\t\t\t\t|  ***** STUDENT RECORD MENU ***** |\n");  
    pf("\t\t\t\t| -------------------------------- |\n");
    pf("\t\t\t\t|                                  |\n");
    pf("\t\t\t\t|                                  |\n");
    pf("\t\t\t\t|  a/A  : add new record           |\n");
    pf("\t\t\t\t|  d/D  : delete a record          |\n");
    pf("\t\t\t\t|  s/S  : show the list            |\n");
    pf("\t\t\t\t|  m/M  : modify a record          |\n");
    pf("\t\t\t\t|  v/V  : save                     |\n");
    pf("\t\t\t\t|  e/E  : exit                     |\n");
    pf("\t\t\t\t|  t/T  : sort the list            |\n");
    pf("\t\t\t\t|  l/L  : delete all the record    |\n");
    pf("\t\t\t\t|  r/R  : reverse the list         |\n");
    pf("\t\t\t\t|                                  |\n");
    pf("\t\t\t\t|       Enter your choice:         |\n");
    pf("\t\t\t\t|----------------------------------|\n");
    pf("\t\t\t\t\t"); 
    do
    {
    scanf(" %c",&op);
    switch (op)
    {
	    case 'a':  case 'A':  add_end(&hptr);       pf("\nNew record added\n");                       break;

	    case 'd':  case 'D':   /******************* sub_menu  ****************************/
				   pf("\t\t\t\t|----------------------------------|\n");
				   pf("\t\t\t\t|        Delete menu               |\n"); 
				   pf("\t\t\t\t|  R/r : enter roll to del         |\n");
				   pf("\t\t\t\t|  N/n : enter name to del         |\n");
				   pf("\t\t\t\t|                                  |\n"); 
                                   pf("\t\t\t\t|       Enter your choice:         |\n");
				   pf("\t\t\t\t|----------------------------------|\n");
				   char op ;  scanf(" %c",&op);
				  if((op=='R')||(op=='r'))
				   {
				          delete(&hptr,op);pf("\n");   break;
                                   }
				  
				  if((op=='N')||(op=='n'))
				  {
				          delete(&hptr,op);pf("\n");   break;
				           				  
				  }
				   else
				   {
					   pf("Your enter wrong option");
					   break;
				   }

	    case 's':  case 'S':    pf("ROLL         names               marks\n");     print(hptr);        break;

	    case 'm':  case 'M':    /******************* sub_menu  ****************************/
                                   pf("\t\t\t\t|----------------------------------|\n");
                                   pf("\t\t\t\t|         Modifiy menu             |\n");
                                   pf("\t\t\t\t|                                  |\n");
                                   pf("\t\t\t\t|  R/r : to search a roll number   |\n");
                                   pf("\t\t\t\t|  N/n : to search a name          |\n");
                                   pf("\t\t\t\t|  P/p : percentage based          |\n");
                                   pf("\t\t\t\t|                                  |\n");
                                   pf("\t\t\t\t|       Enter your choice:         |\n");
                                   pf("\t\t\t\t|----------------------------------|\n");
				 
                                   char mod_op; scanf(" %c",&mod_op);

                                   if((mod_op=='r')||(mod_op=='R'))
				   {
                                     modify_roll (&hptr);  
				   
				   }
				   else if((mod_op=='N')||(mod_op=='n'))
				   {
                                     modify_name (&hptr);  

				   }
				   else  if((mod_op=='P')||(mod_op=='p'))
				   {
                                     modify_mark (&hptr);				   
				   
				   }
                                   
                                   
				   else
                                       
                                               pf("Enter wrong option please try again.......");break;
                                       


   

	    case 'v':  case 'V':    save(hptr);  pf("file has saved successfully\n");   break;

	/*****************************************************  starting  Exit function  *******************************************************************/			    

	    case 'e':  case 'E':   /******************* sub_menu  ****************************/
				   pf("\t\t\t\t|----------------------------------|\n");
                                   pf("\t\t\t\t|      Save menu                   |\n");
                                   pf("\t\t\t\t|                                  |\n");
                                   pf("\t\t\t\t|  S/s : save and exit             |\n");
                                   pf("\t\t\t\t|  E/e : exit without saving       |\n");
                                   pf("\t\t\t\t|  T/t : short list                |\n");
                                   pf("\t\t\t\t|                                  |\n");
                                   pf("\t\t\t\t|       Enter your choice:         |\n");
                                   pf("\t\t\t\t|----------------------------------|\n");
				   char exit_op; scanf(" %c",&exit_op);
				   if((exit_op=='s')||(exit_op=='S'))
				   {
				        save(hptr); pf("file has saved successfully\n");
				 	    return 0;
				    }
				   else if((exit_op=='e')||(exit_op=='E'))
                                   {
                                        pf("Exit successfully\n");
                                            return 0;
                                    }

				 /******************* sub_menu  ****************************/
			   else if((exit_op=='t')||(exit_op=='T'))
                               {
			           pf("\t\t\t\t|----------------------------------|\n");
                                   pf("\t\t\t\t|     short lest menu              |\n");
                                   pf("\t\t\t\t|                                  |\n");
                                   pf("\t\t\t\t|  P/p : sort with percentage      |\n");
                                   pf("\t\t\t\t|  N/n : sort with name            |\n");
                                   pf("\t\t\t\t|                                  |\n");
                                   pf("\t\t\t\t|       Enter your choice:         |\n");
                                   pf("\t\t\t\t|----------------------------------|\n");
                                    
                                       char ch_t; scanf(" %c",&ch_t);
                                   if((ch_t == 'N')||(ch_t =='n'))
                                   {
                                          shortlist_name(hptr);
                                          break;
                                   }
                                   else if((ch_t == 'P')||(ch_t ='p'))
                                   {
                                          shortlist_mark(hptr);
                                          break;

                                   }
				  
				   else
				       { 
					       pf("Enter wrong option");break;
				       }
			    }
        /********************************************    End of exit option     **************************************************************/		   

        /********************************************    starting of sort option     **************************************************************/		   
	    case 't':  case 'T':  
                                   
                                   pf("\t\t\t\t|----------------------------------|\n");
                                   pf("\t\t\t\t|     short lest menu              |\n");
                                   pf("\t\t\t\t|                                  |\n");
                                   pf("\t\t\t\t|  P/p : sort with percentage      |\n");
                                   pf("\t\t\t\t|  N/n : sort with name            |\n");
                                   pf("\t\t\t\t|                                  |\n");
                                   pf("\t\t\t\t|       Enter your choice:         |\n");
                                   pf("\t\t\t\t|----------------------------------|\n");

                                   char ch_t; scanf(" %c",&ch_t);
                                   if((ch_t == 'N')||(ch_t =='n'))
                                   {
                                          shortlist_name(hptr);
                                          break;
                                   }
				   else if((ch_t == 'P')||(ch_t='p'))
                                   {
	 				  shortlist_mark(hptr);
                                          break;

                                   }
  

                                    else
                                       {
                                               pf("Enter wrong option");break;
                                       }


    /********************************************    End of short option     **************************************************************/		   

	    case 'l':  case 'L':    delete_all(&hptr);  pf("All records are delete\n");    break;
	    
	    case 'r':  case 'R':  rev_data(hptr);    break;
	    
	    default : pf("your enter wrong option\n");//switch case else part
    }
    /********************************************    End of switch case     **************************************************************/

         pf("\n\n\t     MAIN MENU ");
         pf("\n\n\tEnter your choice: ");
    }while((op !='e')||(op != 'E'));
    /*******************************************    End of Do while     **************************************************************/ 
}
