#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N-- > 0)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int square[n + 2][m + 2];

        int up = 0;
        int down = 0;
        int left = 0;
        int right = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &square[i][j]);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (square[i][j] == 1)
                {
                    up = square[i - 1][j];
                    down = square[i + 1][j];
                    left = square[i][j - 1];
                    right = square[i][j + 1];

                    if (up == 0 || down == 0 || left == 0 || right == 0)
                    {
                        printf("0");
                    }
                    else
                    {
                        printf("_");
                    }
                }
                else
                {
                    printf("_");
                }
            }

            printf("\n");
        }

        if (N != 0)
        {
            printf("\n");
        }
    }

    return 0;
}
