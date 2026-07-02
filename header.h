#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<string.h>
struct st{
	int roll;
	char name[20];
	float p;
	struct st *next;
};
struct st* load();
void stud_add(struct st**);
void stud_del(struct st**);
void stud_show(struct st*);
void stud_mod(struct st*);
void stud_save(struct st*);
void stud_sort(struct st*);
void stud_exit(struct st*);

