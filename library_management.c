#include <stdio.h>#include <stdlib.h>#include <string.h>
struct library
{
    char name[50], book_name[50], author[50], date[20], ret_date[20], id[10];
    int pages, edition;
    float price;
} l[100];
int password(int);
void welcomeMessage();
void getDetails(int);
void get_det(int);
void print(int);
int main()
{
    char re;
    int i = 0, j;
    welcomeMessage();
    printf("\n\n\t\tIf you want to add another book:\n\t\tPress 'N' or press 'E' to exit\n\t\t");
    fflush(stdin);
    scanf("%c", &re);
    if (re == 'N' || re == 'n')
        goto new;
    else if (re == 'E' || re == 'e')
        exit(0);
    new : while (j != 3)
    {
        printf("\n\t\tEnter one of the following option:\n\t\t1. Issue a Book\n\t\t2. Return a Book\n\t\t3. Exit\n\t\t");
        scanf("%d", &j);
        fflush(stdin);
        switch (j)
        {
        case 1:
            getDetails(i);
            i++;
            break;
        case 2:
            get_det(i);
            i++;
            break;
        case 3:
            break;
        default:
            printf("\t\tPlease choose the correct option !\n");
            goto new;
        }
    }
    if (i > 0)
        print(i);
    return 0;
}
int password(int i)
{
    int pass, x = 10;
    printf("\t\tEnter the name of the student: ");
    scanf("%[^\n]*%c", l[i].name);
    printf("\t\tEnter the ID of the student: ");
    scanf("%s", l[i].id);
    while (x != 0)
    {
        printf("\n\t\tInput the password: ");
        scanf("%d", &pass);
        if (pass == 20 && l[i].id[1] == '0')
        {
            printf("\t\tCorrect password");
            x = 0;
        }
        else if (pass == 21 && l[i].id[1] == '1')
        {
            printf("\t\tCorrect password");
            x = 0;
        }
        else if (pass == 22 && l[i].id[1] == '2')
        {
            printf("\t\tCorrect password");
            x = 0;
        }
        else if (pass == 23 && l[i].id[1] == '3')
        {
            printf("\t\tCorrect password");
            x = 0;
        }
        else
            printf("\t\tWrong password, try another");
        printf("\n");
    }
    return 0;
}
void welcomeMessage()
{
    printf("\n\n");
    printf("\n\t\t*------------------*");
    printf("\n\t\t||                                                    ||");
    printf("\n\t\t||                       WELCOME                      ||");
    printf("\n\t\t||                         TO                         ||");
    printf("\n\t\t||                       LIBRARY                      ||");
    printf("\n\t\t||                      MANAGEMENT                    ||");
    printf("\n\t\t||                        SYSTEM                      ||");
    printf("\n\t\t||        ||");
    printf("\n\t\t*------------------*\n");
}
void getDetails(int i)
{
    password(i);
    fflush(stdin);
    printf("\n\t\tEnter the name of book: ");
    gets(l[i].book_name);
    fflush(stdin);
    fflush(stdout);
    printf("\n\t\tEnter the name of author: ");
    gets(l[i].author);
    fflush(stdin);
    fflush(stdout);
    printf("\n\t\tEnter the edition of book: ");
    scanf("%d", &l[i].edition);
    fflush(stdin);
    fflush(stdout);
    printf("\n\t\tEnter the total number of pages in the book: ");
    scanf("%d", &l[i].pages);
    fflush(stdin);
    fflush(stdout);
    printf("\n\t\tEnter the price of the book: ");
    scanf("%f", &l[i].price);
    fflush(stdin);
    printf("\n\t\tEnter the date of issuing the book: ");
    scanf("%s", l[i].date);
    fflush(stdin);
    printf("\n\t\tEnter the expected date of returning the book: ");
    scanf("%s", l[i].ret_date);
    fflush(stdin);
}
void get_det(int i)
{
    password(i);
    fflush(stdin);
    printf("\n\t\tEnter the name of book: ");
    gets(l[i].book_name);
    printf("\n\t\tEnter the name of author: ");
    gets(l[i].author);
    printf("\n\t\tEnter the edition of book: ");
    scanf("%d", &l[i].edition);
    printf("\n\t\tEnter the total number of pages in the book: ");
    scanf("%d", &l[i].pages);
    printf("\n\t\tEnter the price of the book: ");
    scanf("%f", &l[i].price);
    printf("\n\t\tEnter the date of issuing the book: ");
    scanf("%s", l[i].date);
    printf("\n\t\tEnter the date of returning the book:");
    scanf("%s", l[i].ret_date);
}
void print(int i)
{
    int j;
    printf("\n\n\t\t--------Record---------\n\n");
    for (j = 0; j < i; j++)
    {
        printf("\t\t(%d) \n\n", j + 1);
        printf("\t\tStudent Name : %s\n", l[j].name);
        printf("\t\tID Number    : %s\n", l[j].id);
        printf("\t\tBook         : %s\n", l[j].book_name);
        printf("\t\tAuthor       : %s\n", l[j].author);
        printf("\t\tEdition   : %d\n", l[j].edition);
        printf("\t\tTotal Pages  : %d\n", l[j].pages);
        printf("\t\tPrice        : %.2f\n", l[j].price);
        printf("\t\tIssue Date   : %s\n", l[j].date);
        printf("\t\tReturn Date  : %s\n", l[j].ret_date);
        printf("\n\n");
    }
    printf("\n\n\t\t--------Thank You---------\n\n");
}