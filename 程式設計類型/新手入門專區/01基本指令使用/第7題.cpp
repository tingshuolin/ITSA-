#include <stdio.h>

int main()
{
    int type;
    int i, j;

    scanf("%d", &type);

    // 1：空心三角形
    if (type == 1)
    {
        for (i = 1; i <= 5; i++)
        {
            // 印空白
            for (j = 1; j <= 5 - i; j++)
            {
                printf(" ");
            }

            // 印星號
            for (j = 1; j <= 2 * i - 1; j++)
            {
                if (i == 1 || i == 5 || j == 1 || j == 2 * i - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    // 2：實心三角形
    else if (type == 2)
    {
        for (i = 1; i <= 5; i++)
        {
            // 印空白
            for (j = 1; j <= 5 - i; j++)
            {
                printf(" ");
            }

            // 印星號
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    // 3：實心倒三角形
    else if (type == 3)
    {
        for (i = 5; i >= 1; i--)
        {
            // 印空白
            for (j = 1; j <= 5 - i; j++)
            {
                printf(" ");
            }

            // 印星號
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}
