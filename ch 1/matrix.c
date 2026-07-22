#include<stdio.h>
#include<conio.h>

void main();

    int m1 [2] [3], m2[3] [2] ,m3 [3] [3] ;

    int i,j;

printf("enter first matrix value");
for (i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&m1[i] [j]);
    }
}

printf("enter second matrix value ");
for (i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&m2[i] [j]);
    }
}

printf("\n enter matrix value (m1=m2*m3) ");
for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&m1[i] [j]);
    }
}
