#include"header.h"
struct st *load()
{
FILE *fp=fopen("student.dat","r");
if(fp==NULL)
	return NULL;
struct st* hptr=NULL;
struct st* temp=NULL;
struct st* newnode;
while(1)
{
	newnode=(struct st*)malloc(sizeof(struct st));
	if(fread(newnode,sizeof(struct st),1,fp)!=1)
	{
		free(newnode);
		break;
	}
	newnode->next=NULL;
	if(hptr==NULL)
		hptr=temp=newnode;
	else{
		temp->next=newnode;
		temp=newnode;
	}
}
fclose(fp);
return hptr;
}
