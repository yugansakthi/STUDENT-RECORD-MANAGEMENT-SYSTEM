#include"header.h"
void stud_show(struct st* ptr)
{
	if(ptr==NULL){
		printf("\nRecords not found\n");
		return;
	}
	printf("---------------------------------------------\n");
	printf("%-8s %-19s %-10s\n","RollNo","Name","Percentage");
	printf("---------------------------------------------\n");

	while(ptr){
		printf("%-8d %-19s %-10.2f\n",ptr->roll,ptr->name,ptr->p);
		ptr=ptr->next;
	}
	printf("----------------------------------------\n");
}

