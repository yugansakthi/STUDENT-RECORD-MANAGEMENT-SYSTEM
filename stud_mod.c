#include"header.h"
void stud_mod(struct st* head)
{
	char ch1, ch2;
	char name[20], newname[20];
	float newp;
	int roll,flag;
	struct st *temp;
	if(head==NULL)
	{
		printf("No Records Found.\n");
		return;
	}
	printf("\nModify Submenu\n");
	printf("N/n : Modify Name\n");
	printf("P/p : Modify Percentage\n");
	printf("\nEnter your choice: ");
	scanf(" %c", &ch1);
	printf("\nSearch Using\n");
	printf("R/r : Roll Number\n");
	printf("N/n : Name\n");
	printf("\nEnter your choice: ");
	scanf(" %c", &ch2);
	if(ch2=='R'||ch2=='r')
	{	
		printf("Enter Roll Number: ");
		scanf("%d",&roll);
		temp = head;
		while(temp!=NULL)
		{
			if(temp->roll==roll)
			{
				if(ch1=='N'||ch1=='n')
				{
					printf("Enter New Name: ");
					scanf(" %[^\n]", temp->name);
				}
				else if(ch1=='P'||ch1=='p')
				{
					printf("Enter New Percentage: ");
					scanf("%f",&temp->p);
				}
				else
				{
					printf("Invalid Modifying Choice.\n");
					return;
				}
				printf("Record Modified Successfully.\n");
				return;
			}
			temp = temp->next;
		}
		printf("Roll Number Not Found.\n");
	}
	else if(ch2=='N'||ch2=='n')
	{
		printf("Enter Name: ");
		scanf(" %[^\n]",name);
		temp=head;
		flag=0;
		printf("\nMatching Records\n");
		printf("---------------------------------\n");
		printf("Roll    Name    Percentage\n");
		printf("---------------------------------\n");
		while(temp!=NULL)
		{
			if(strcasecmp(temp->name,name)==0)
			{
				printf("%d    %s    %.2f\n",temp->roll,temp->name,temp->p);
				flag=1;
			}
			temp = temp->next;
		}
		if(flag==0)
		{
			printf("No Matching Records Found.\n");
			return;
		}

		while(1)
		{
			printf("\nEnter Roll Number to Modify: ");
			scanf("%d",&roll);
			temp=head;
			while(temp!=NULL)
			{
				if(temp->roll==roll&&strcasecmp(temp->name,name)==0)
				{
					if(ch1 =='N'||ch1=='n')
					{
						printf("Enter New Name: ");
						scanf(" %[^\n]",temp->name);
					}
					else if(ch1=='P'||ch1=='p')
					{
						printf("Enter New Percentage: ");
						scanf("%f",&temp->p);
					}
					else
					{
						printf("Invalid Modify Choice.\n");
						return;
					}
					printf("Record Modified Successfully.\n");
					return;
				}

				temp = temp->next;
			}

			printf("Invalid Roll Number! Enter one of the displayed Roll Numbers.\n");
		}
	}
}
