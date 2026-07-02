#include"header.h"
int main()
{
	struct st *head=load();
	char ch;
	do
	{
	printf("--------------------------------\n");
	printf("| **** STUDENT RECORD MENU ****|\n");
	printf("--------------------------------\n");
	printf("|     A/a: Add New Record      |\n");
	printf("|     D/d: Delete A Record     |\n");
	printf("|     S/s: Show the List       |\n");
	printf("|     M/m: Modify A record     |\n");
	printf("|     V/v: Save                |\n");
	printf("|     E/e: Exit                |\n");
	printf("|     T/t: Sort the List       |\n");
	printf("--------------------------------\n");
		printf("Enter Your Choice:\n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'A':
			case 'a':
					stud_add(&head);
					break;
			case 'D':
			case 'd':
					stud_del(&head);
					break;
			case 'S':
			case 's':
					stud_show(head);
					break;
			case 'M':
			case 'm':
					stud_mod(head);
					break;
			case 'V':
			case 'v':
					stud_save(head);
					break;
			case 'T':
			case 't':
					stud_sort(head);
					break;
			case 'E':
			case 'e':
					stud_exit(head);
					break;
			default:
					printf("Invalid input");
					break;
		}
	}while(1);
}
