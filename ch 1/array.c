#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[10];
    int i, pos;
    int size = 10;

    clrscr();

    printf("\n Enter 10 values for the array:\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position to delete (0 to 9): ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= size)
    {
        printf("\nInvalid position!");
    }
    else
    {
        for (i = pos; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("\nArray after deletion:\n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    getch();
}
