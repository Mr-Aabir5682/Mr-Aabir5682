#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    printf("%c]0;%s%c", '\033', "Print Something", '\007'); // Console Title.
start:
{
    system("cls"); // clear the screen.

    char p;
    int rows, choice;           //reset the value.

    printf("\n!!Pattern Printer!!\n"); // title.

    printf("\n**press 0 for exit**\n\n"); // exit massage.

    printf("\n::::::::::::Menu::::::::::::\n\n");
    printf("What do you want to print: ");
    scanf(" %c", &p);
    if (p == '0') // exit the proggram.
    {
        printf("Exiting...");
        Sleep(1000); // Delay for 1000 milliseconds (1 seconds)
        exit(0);
    }
    printf("\nEnter The number of Raws: ");
    scanf("%d", &rows);
    if (rows == 0) // exit the proggram.
    {
        printf("Exiting...");
        Sleep(1000); // Delay for 1000 milliseconds (1 seconds)
        exit(0);
    }
    printf("\nTypes:\n-----------------------------------------\n");
    // Sample of Triangle and Inverted Triangle
    printf("1. Triangle           2. Inverted Triangle\n");
    printf("   *                    * * * * *\n");
    printf("   * *                  * * * *\n");
    printf("   * * *                * * *\n");
    printf("   * * * *              * *\n");
    printf("   * * * * *            *\n\n");

    // Sample of Pyramid and Diamond
    printf("3. Pyramid                  4. Diamond\n");
    printf("         *                         *\n");
    printf("       * * *                    * * *\n");
    printf("     * * * * *               * * * * *\n");
    printf("    * * * * * *            * * * * * * *\n");
    printf("   * * * * * * *             * * * * *\n");
    printf(" * * * * * * * * *             * * * \n");
    printf("* * * * * * * * * *              * \n");

    // Sample of Right Pascal's Triangle and Butterfly
    printf("5. Right Pascal's Triangle  6. Butterfly\n");
    printf("   *                      *        *\n");
    printf("   * *                    **      **\n");
    printf("   * * *                  ***    ***\n");
    printf("   * * * *                ****  ****\n");
    printf("   * * * * *              **********\n");
    printf("   * * * *                ****  ****\n");
    printf("   * * *                  ***    ***\n");
    printf("   * *                    **      **\n");
    printf("   *                      *        *\n");
    printf("-----------------------------------------\n");
    printf("\nSelect The printing type: ");
    scanf("%d", &choice);
    switch (choice) // choice chakeing.
    {
    case 1: // Triangle
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c", p);
            }
            printf("\n");
        }
        break;
    case 2: // Inverted Triangle
        for (int i = rows; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c", p);
            }
            printf("\n");
        }
        break;
    case 3: // Pyramid
        for (int i = 1; i <= rows; i++)
        {
            for (int k = 1; k <= rows - i; k++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("%c", p);
            }
            printf("\n");
        }
        break;
    case 4: // Diamond
        for (int i = 1; i <= rows; i++)
        {
            for (int k = 1; k <= rows - i; k++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("%c", p);
            }
            printf("\n");
        }
        for (int i = rows - 1; i >= 1; i--)
        {
            for (int k = 1; k <= rows - i; k++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("%c", p);
            }
            printf("\n");
        }
        break;
    case 5: // Right Pascal's Triangle
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c", p);
            }
            printf("\n");
        }
        for (int i = rows - 1; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c", p);
            }
            printf("\n");
        }
        break;
    case 6: // Butterfly
            //  Upper part of the butterfly
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c", p);
            }
            for (int j = 1; j <= 2 * (rows - i); j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("%c", p);
            }
            printf("\n");
        }

        // Lower part of the butterfly
        for (int i = rows; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%c", p);
            }
            for (int j = 1; j <= 2 * (rows - i); j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("%c", p);
            }
            printf("\n");
        }
        break;
    case 0: // exit the proggram.
        printf("\nExiting....");
        Sleep(1000); // Delay for 1000 milliseconds (1 seconds)
        exit(0);
        break;

    default:
        printf("\nSyntex Error!!");
        break;
    }
}
    printf("\n");
    system("pause"); // restart the proggram.
    {
        goto start;
    }

    return 0;
}