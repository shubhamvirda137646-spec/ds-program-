# include<stdio.h>
# include<string.h>
# include<conio.h>

struct student
{
    int rollno;
    char name[20];
};

void main()
{
    struct student s1;
    printf("\n Enter Roll number :");
    scanf("%d",&s1.rollno);
    printf("\n Enter name:");
    scanf("%s",s1.name);
    printf("\n student data is as follow :");
    printf("\n ******************** :");
    printf("\n Roll number is : %d",s1.rollno);
    printf("\n name is : %s",s1.name);
    getch();
}
