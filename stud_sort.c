#include"header.h"
void stud_sort(struct st *head)
{
    struct st *i, *j, *max;
    struct st temp;
    char ch;
    if(head == NULL || head->next == NULL)
    {
        printf("Not enough records to sort.\n");
        return;
    }
    do
    {
        printf("\nChoose Sorting Option\n");
        printf("N/n : Sort by Name\n");
        printf("P/p : Sort by Percentage\n");
        printf("Enter Choice : ");
        scanf(" %c", &ch);
        if(ch!='N' && ch!='n' && ch!='P' && ch!='p')
        {
            printf("Invalid Choice! Please Enter Again.\n");
        }
    }while(ch!='N' && ch!='n' && ch!='P' && ch!='p');
    for(i = head; i->next != NULL; i = i->next)
    {
        max=i;
        for(j = i->next; j != NULL; j = j->next)
        {
            if((ch=='N' || ch=='n') &&
               strcasecmp(j->name, max->name) < 0)
            {
                max=j;
            }
            else if((ch=='P' || ch=='p') &&
                    j->p>max->p)
            {
                max=j;
            }
        }
        if(max!=i)
        {
            memcpy(&temp,i,sizeof(struct st)-8);
            memcpy(i,max,sizeof(struct st)-8);
            memcpy(max,&temp,sizeof(struct st)-8);
        }
    }
    printf("\nRecords are Sorted.\n");
}
