// 2D array storing table of 2 and 3

#include <stdio.h>

// void change_value();
// void change_value(int x)
// {
//     printf("Enter the value of x: ");
//     scanf("%d", &x);
// }
void store_table(int table[][10], int m);

int main()
{
    // printf("Enter the initial value of x: ");
    // scanf("%d", &x);

    int rows;
    printf("Enter the no of rows: ");
    scanf("%d", &rows);

    int table[rows][10];
    store_table(table, rows);

// some problem is there need fixing
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void store_table(int table[][10], int m)
{
    int x;
    char choice;

    do
    {
        printf("Enter the value of x: ");
        scanf("%d", &x);

        for (int i = 1; i < 2; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                table[i][j - 1] = x * j;
                printf("%d  ", table[i][j - 1]);
            }
        }

        printf("\nDo you want to add more table in array: ");
        scanf("%s", &choice);
    } while (choice == 'y');
}
