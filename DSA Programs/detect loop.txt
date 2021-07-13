#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node  *next;
}linked;
struct node *head,*last=NULL,*newnode=NULL;
int detectloop(struct node *head)
{
    struct node *slow;
    struct node *fast;
    slow=fast=head;
    while(fast!=NULL && slow!=NULL &&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return countnode(slow);
    }
    return 0;
}
int countnode(struct node *temp)
{
    int count=1;
    struct node *temp1=temp;
    while(temp1->next!=temp)
    {
        count++;
        temp1=temp1->next;
    }
    return count;
}
int main()
{
    int num;
    do
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("\nNot enough memory..");
            exit(1);
        }
        printf("\nEnter a number..");
        scanf("%d",&num);
        newnode->data=num;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            last=newnode;
        }
        else
        {
            last->next=newnode;
            last=newnode;
        }
    }while(num<10);
    printf("\nlength of loop=%d",detectloop(head));
    return 0;
}