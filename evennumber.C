#include <stdio.h>
#include <conio.h>
main()
{
    int i;
    clrscr();
    printf("1 to 100 numbers print\n\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    getch();
}