/**********************************************************************************

    1)  Store information as much information about the planets in our solar
        sytem,like Name,approximate weight,dimensions of the planet,etc in any 
          data structure
    2)  Write code to find the heaviest planet
    3)  Sort the planet with respect to their sizes using any algorithm
    4)  Sort the planet according to their weight using any algorithm

**********************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#define SIZE 1024

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head,char Name[SIZE],int no, float no1);
void InsertLast(PPNODE head,char Name[SIZE],int no,float no1);
void Display(PNODE head);
int Heaviest_Planet(PNODE head);
int ListSortAsc_weight(PPNODE head);
int ListSortDec_weight(PPNODE head);
int ListSortAsc_size(PPNODE  head);
int ListSortDec_size(PPNODE head);