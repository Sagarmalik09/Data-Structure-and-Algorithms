	#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct linkedlist
{
  int info;
  struct linkedlist *next;
} linked;

linked *newnode = NULL, *head = NULL, *last = NULL, *temp = NULL, *pre=NULL,*prev=NULL,*temp1=NULL,*temp2=NULL,*lastnode=NULL;
int pos,delPos,count=0,swap=0;

int main ()
{
  int num, choice, flag, count =0;
  while(1)
    {
      printf ("\n 1. Insert at end ..");
      printf ("\n 2. Traverse ..");
      printf ("\n 3. Insert at Begin ..");
      printf ("\n 4. Delete at end ..");
      printf ("\n 5. Search the data ..");
      printf ("\n 6. Delete at begin..");
      printf ("\n 7. Insert at a position ..");
      printf ("\n 8. Delete at a position ..");
      printf ("\n 9. Sorting..");
      printf ("\n 10. Exit ");
      printf ("\n Enter the choice : ");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
    newnode = (linked *) malloc (sizeof (linked));
	  if (newnode == NULL)
	    {
	      printf ("Not enough memory ");
	      exit (1);
	    }
	  printf ("Enter a number :");
	  scanf ("%d", &num);
	  newnode->info = num;
	  newnode->next = NULL;
	  if (head == NULL)
	    {
	      head = newnode;
	      last = newnode;
	    }
	  else
	    {
	      last->next = newnode;
	      last = newnode;
	    }

	  break;

	case 2:
	  printf ("\n data... ");
	  temp = head;
	  while (temp != NULL)
	    {
	      printf ("\t %d", temp->info);
	      temp = temp->next;
	    }
	  break;
	  
	case 3:
	
	newnode = (linked*)malloc(sizeof(linked));
	if(newnode==NULL){
	  printf("\n memory not enough");
	}

  printf("Enter a number : ");
  scanf("%d",&num);
  newnode->info = num;
  newnode->next = head;
  head = newnode;
  if(last == NULL){
    last = newnode;
  }
  
  break;
  
  case 4:
  
  temp = head;
  if(temp==NULL){
    printf("Empty linked list so you can't remove any data");
    exit(1);
  }
    while(temp->next!=NULL){
      pre=temp;
      temp= temp->next; 
    }
    pre->next = NULL;
    last = pre;
    if(last==NULL){
      head = NULL;
    }
    free(temp);
  
  break;
  case 5:
  flag=0;
  printf("\n Enter a number of Search : ");
  scanf("%d", &num);
  temp = head;
  while(temp!=NULL){
    count++;
    if(temp->info == num)
    {
      flag = 1;
      break;
    }
    temp = temp->next;
  }
  if(flag==1){
    printf("\n Number is found and position is %d", count);
  }
  else{
    printf("Number not Found ..");
  }
  
  break;
  case 6:
  temp=head;
  if(temp==NULL)
  {
      printf("\nEmpty linked list");
      exit(1);
  }
  head=temp->next;
  free(temp);
  if(head==NULL)
  last=NULL;
  break;
  case 7:
    if(head==NULL)
    {
       printf("\nempty linked list");
       break;
    }
    newnode=(linked *)malloc(sizeof(linked));
    if(newnode==NULL)
    {
        printf("\nnot enough memory");
        exit(1);
    }
    printf("\nEnter a number:");
    scanf("%d",&num);
    newnode->info=num;
    printf("\nEnter the position:");
    scanf("%d",&pos);
    temp=head;
    while(temp!=NULL)
    {
        count++;
        if(pos==count)
        break;
        prev=temp;  //100
        temp=temp->next; //200
    }
    if(pos>=count+1)
    {
        printf("\nPosition not exist");
        break;
    }
    if(temp!=head){
    prev->next=newnode;
    newnode->next=temp;
    }
    if(temp==head){
    newnode->next=head;
    head=newnode;
    }
    count=0;
    break;
case 8:
if(head==NULL)
    {
       printf("\nEmpty linked list");
       break;
    }
    printf("\nEnter the position:");
    scanf("%d",&delPos);
    temp1=head;   //100
    while ((count-1)!=delPos)
    { 
        count++;
        if(delPos==count)
        break;
        temp2= temp1; //100
        temp1= temp1->next; //200
    }
    if(delPos>=count+1  )
    {
        printf("\nPosition not exist");
        break;
    }
    if(temp1==head){
    head=temp1->next;
    free(temp1);
    break;
    }
    temp2->next = temp1->next; 
    free (temp1);
    count=0;
    break;
    case 9:
    temp=head;
    lastnode=last;
    while(temp->next!=NULL)
    {
        temp1=head;
        temp2=temp1->next;
        while(temp1->next!=NULL)
        {
            if(temp1->info>temp2->info)
            {
                swap=temp1->info;
                temp1->info=temp2->info;
                temp2->info=swap;
            }
            prev=temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        lastnode=prev;
        temp=temp->next;
    }
    break;
	case 10:
	  exit (1);
	}
	
 }
 
}