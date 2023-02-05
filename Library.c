#include"Header.h"

struct node
{
  char name[SIZE];
  int weight;
  float dimension;
  struct node *next;
};

/*********************************************************************
//  Function name  :  InsertFirst
//  Description    :  Used to insert at first position of Linked List
//  Parameters     :  Addreass of first pointer & data of node
//  Return Value   :  void
//  Date           :  05/02/2023
//  Author         :  Swapnil Harishchandra Thorat
*********************************************************************/

void InsertFirst(PPNODE head,char Name[SIZE],int no, float no1)
{
   PNODE newn = (PNODE)malloc(sizeof(NODE));
   newn->next = NULL;

   strcpy(newn->name,Name);
   newn->weight = no;
   newn->dimension = no1;  //newn->data  

   if(*head == NULL)
   {
     *head = newn;
   }
   else
   {
     newn->next = *head;
     *head = newn;
   }
}

/**********************************************************************
//  Function name :  InsertLast
//  Description   :  Used to insert at Last position of Linked List
//  Parameters    :  Addreass of first pointer,character,integer ,float
//  Return Value  :  void
***********************************************************************/

void InsertLast(PPNODE head,char Name[SIZE],int no,float no1)
{
  PNODE temp1 = NULL;
  PNODE newn = (PNODE)malloc(sizeof(NODE));
  newn->next = NULL;

  strcpy(newn->name,Name);
  newn->weight = no;
  newn->dimension = no1;

  if(*head == NULL)   //if LL is empty
  {
    *head = newn;
  }
  else
  {
    temp1 = *head;
    while(temp1->next != NULL)
    {
      temp1 = temp1->next;
    }
    temp1->next = newn;
  }
}

/***************************************************************
     Function name :  Display
     Description   :  Used to display elements of Linked List
     Parameters    :  First pointer
     Return Value  :  void
****************************************************************/

void Display(PNODE head)
{
  while(head != NULL)
  {
    printf("|%s,%d,%f | ->",head->name,head->weight,head->dimension);
    head = head->next;
  }
  printf("NULL\n");
}


/***************************************************************
     Function name :  Heaviest_Planet
     Description   :  Used to Heaviest Planet of Linklist
     Parameters    :  First pointer
     Return Value  :  integer
****************************************************************/

int Heaviest_Planet(PNODE head)
{
  int iMax = 0;

  if(head != NULL)
  {
    iMax = head->weight;
  }

  while(head != NULL)
  {
    if(head->weight >iMax)
    {
      iMax = head->weight;
    }
    head = head->next;
  }
  return iMax;
}


/***************************************************************
     Function name :  ListSortAsc_weight
     Description   :  Used List sort ascending weight of Linklist
     Parameters    :  Addreass of first pointer
     Return Value  :  int
****************************************************************/

int ListSortAsc_weight(PPNODE head)
{
  PNODE temp1 = *head;
  PNODE temp2 = (*head)->next;
  PNODE temp3 = NULL;

  if(*head == NULL || (*head)->next == NULL)
  {
    return -1;
  }

  while(temp2)
  {
    if(temp1->weight > temp2->weight)
    {
      if(temp1==*head && temp2== temp1->next)
      {
        temp1->next = temp2->next;
        temp2->next = *head;
        *head = temp2;
      }
      else
      {
        temp3 = *head;
        while(temp3->next != temp1)
        {
          temp3 = temp3->next;
        }
        temp3->next = temp2;
        temp1->next = temp2->next;
        temp2->next = temp1;
      }
      temp1 = *head;
      temp2 = temp1->next;

    }
    else
    {
      temp1= temp1->next;
      temp2= temp1->next;
    }
  }
  return 1;
}

/***************************************************************
     Function name :  ListSortDec_weight
     Description   :  Used List sort Descending weight of Linklist
     Parameters    :  Addreass of first pointer
     Return Value  :  int
****************************************************************/

int ListSortDec_weight(PPNODE head)
{
  PNODE temp1 = *head;
  PNODE temp2 =(*head)->next;
  PNODE temp3 = NULL;

  if(*head == NULL ||(*head)->next == NULL)
  {
    return -1;
  }
  while(temp2)
  {
    if(temp1->weight < temp2->weight)
    {
        if(temp1== *head && temp2 == temp1->next)
        {
          temp1->next = temp2->next;
          temp2->next = *head;
          *head = temp2;
        }
        else
        {
          temp3 = *head;
          while(temp3->next != temp1)
          {
            temp3 = temp3->next;
          }
          temp3->next = temp2;
          temp1->next = temp2->next;
          temp2->next = temp1;
        }
        temp1= *head;
        temp2 = temp1->next;
    }
    else
    {
      temp1= temp1->next;
      temp2=temp1->next;
    }
  }
  return 1;
}

/***************************************************************
     Function name :  ListSortAsc_size
     Description   :  Used List sort ascending size of Linklist
     Parameters    :  Addreass of first pointer
     Return Value  :  int
****************************************************************/

int ListSortAsc_size(PPNODE  head)
{
  PNODE temp1 = *head;
  PNODE temp2 =(*head)->next;
  PNODE temp3 = NULL;

  if(*head == NULL  || (*head)-> next == NULL)
  {
    return -1;
  }
  while(temp2)
  {
    if(temp1->dimension >temp2->dimension)
    {
      if(temp1 == *head && temp2== temp1->next)
      {
        temp1->next=temp2->next;
        temp2->next=*head;
        *head= temp2;
      }
      else
      {
        temp3= *head;
        while(temp3->next != temp1)
        {
          temp3 = temp3->next;
        }
        temp3->next = temp2;
        temp1->next = temp2->next;
        temp2->next = temp1;
      }
      temp1= *head;
      temp2=temp1->next;
    }
    else
    {
      temp1= temp1->next;
      temp2= temp2->next;
    }
  }
  return 1;
}

/***************************************************************
     Function name :  ListSortAsc_size
     Description   :  Used List sort Descending size of Linklist
     Parameters    :  Addreass of first pointer
     Return Value  :  int
****************************************************************/

int ListSortDec_size(PPNODE head)
{
  PNODE temp1 = *head;
  PNODE temp2 =(*head)->next;
  PNODE temp3 = NULL;

  if(*head == NULL ||(*head)->next == NULL)
  {
    return -1;
  }
  while(temp2)
  {
    if((temp1->weight && temp1->dimension) < (temp2->weight && temp2->dimension))
    {
        if(temp1== *head && temp2 == temp1->next)
        {
          temp1->next = temp2->next;
          temp2->next = *head;
          *head = temp2;
        }
        else
        {
          temp3 = *head;
          while(temp3->next != temp1)
          {
            temp3 = temp3->next;
          }
          temp3->next = temp2;
          temp1->next = temp2->next;
          temp2->next = temp1;
        }
        temp1= *head;
        temp2 = temp1->next;
    }
    else
    {
      temp1= temp1->next;
      temp2=temp1->next;
    }
  }
  return 1;
}