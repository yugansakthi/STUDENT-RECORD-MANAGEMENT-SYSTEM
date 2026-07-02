#include"header.h"
void stud_save(struct st *head)
{
	struct st *temp=head;
	FILE *fp=fopen("student.dat","w");
	while(temp){
		fwrite(temp,sizeof(struct st),1,fp);
		temp=temp->next;
 	}
	fclose(fp);
	printf("Records are saved\n");
}

