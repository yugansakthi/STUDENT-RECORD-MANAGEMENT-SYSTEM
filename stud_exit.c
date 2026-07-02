#include"header.h"
void stud_exit(struct st *head)
{
    char ch;
    while(1)
    {
        printf("\nExit Menu\n");
        printf("S/s : Save and Exit\n");
        printf("E/e : Exit without Saving\n");
        printf("Enter Your Choice: ");
        scanf(" %c", &ch);
        switch(ch)
        {
            case 'S':
            case 's':
                stud_save(head);
                printf("Records are saved\n");
                printf("Exiting...\n");
                exit(0);
            case 'E':
            case 'e':
                printf("Exiting without saving...\n");
                exit(0);
            default:
                printf("Invalid Choice. Please enter S/s or E/e.\n");
        }
    }
}
