#include"header.h"
void stud_del(struct st** head)
{
	int c=0;
	char ch,name[20];
	int roll,flag=0;
	struct st *temp, *prev;
	if(*head==NULL)
	{
		printf("No Records Found.\n");
		return;
	}
	printf("\nSubmenu:\n");
	printf("R/r : Delete using Rollno\n");
	printf("N/n : Delete using Name\n");
	printf("\nEnter your choice: ");
	scanf(" %c", &ch);
	if(ch=='R'||ch=='r')
	{
		printf("Enter Roll Number: ");
		scanf("%d", &roll);
		temp=*head;
		prev=NULL;
		while(temp!=NULL)
		{
			if(temp->roll==roll)
			{
				if(prev==NULL)
					*head=temp->next;
				else
					prev->next=temp->next;
				free(temp);
				printf("Student Record is deleted\n");
				return;
			}
			prev=temp;
			temp=temp->next;
		}
		printf("Roll Number Not Found.\n");
	}
	else if(ch=='N'||ch=='n')
	{
		printf("Enter Name: ");
		scanf(" %[^\n]", name);
		temp=*head;
		flag=0;
		printf("\nMatching Records\n");
		printf("---------------------------------------------\n");
		printf("%-8s %-19s %-10s\n","RollNo","Name","Percentage");
		printf("---------------------------------------------\n");
		while(temp!=NULL)
		{
			if(strcasecmp(temp->name, name) == 0)
			{
				printf("%-8d %-19s %-10.2f\n",temp->roll,temp->name,temp->p);
				flag=1;
			}
			temp = temp->next;
		}
		if(flag==0)
		{
			printf("No matching records found\n");
		}
		while(1)
		{
			printf("\nEnter Roll Number to Delete: ");
			scanf("%d",&roll);
			temp=*head;
			prev=NULL;
			while(temp!=NULL)
			{
				if(temp->roll==roll&&strcasecmp(temp->name,name)==0)
				{
					if(prev==NULL)
						*head=temp->next;
					else
						prev->next=temp->next;
					free(temp);
					printf("Student Record is  Deleted\n");
					return;
				}
				prev = temp;
				temp = temp->next;
			}
			printf("Invalid Roll Number please enter the rollno displayed on screen.\n");
		}
	}
}
