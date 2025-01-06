#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define pf printf
typedef struct student
{
        int roll;
        char name[20];
        float mark;
       struct student *next;
}st;
static int roll_number = 1;


void add_end(st**);
void print(st* );
void  save (st* );
void delete (st **,char );
void delete_all(st**);
int count (st*);
void rev_data(st* );
void modify_data(st**,char );
int search(st*ptr,char );
void shortlist(st*,char);
void modify_roll(st**);                        
void modify_name(st**);                        
void modify_mark(st**);                        
void shortlist_mark(st*);
void shortlist_name(st*);

