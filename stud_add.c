#include"header.h"
void stud_add(struct st** head)
{
    struct st *newnode,*temp,*prev;
    int missingroll= 1;
    newnode = (struct st*)malloc(sizeof(struct st));
    printf("Enter Student Name: ");
    scanf(" %[^\n]",newnode->name);
    printf("Enter Percentage: ");
    scanf("%f",&newnode->p);
    newnode->next=NULL;
    if (*head==NULL)
    {
        newnode->roll=1;
        *head=newnode;
        return;
    }
    temp=*head;
    prev=NULL;
    while(temp!=NULL)
    {
        if(temp->roll!=missingroll)
        {
            newnode->roll=missingroll;
            if (prev==NULL)
            {
                newnode->next=*head;
                *head=newnode;
            }
            else
            {
                prev->next=newnode;
                newnode->next=temp;
            }
            return;
        }
        missingroll++;
        prev=temp;
        temp=temp->next;
    }
    newnode->roll=missingroll;
    prev->next=newnode;
}
