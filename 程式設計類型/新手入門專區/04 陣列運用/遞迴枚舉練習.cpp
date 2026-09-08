#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

const int maxn = 10;

int n, Price;

int a[maxn]{}, Currencyvalue[100];

void dfs(int level, int remain);
void printf_ans();

void dfs(int level, int remain)
{
    if(level == n)
    {
        printf_ans();
        return;
    }

    for(int i = 0; i <= remain / Currencyvalue[level]; i++)
    {
        a[level] = i;

        int next_remain = remain - Currencyvalue[level] * i;

        dfs(level + 1, next_remain);
    }
}

void printf_ans()
{
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        total += Currencyvalue[i] * a[i];
    }

    if(total == Price)
    {
        cout << "(";

        for(int i = 0; i < n; i++)
        {
            cout << a[i];

            if(i != n - 1)
            {
                cout << ",";
            }
        }

        cout << ")" << endl;
    }
}

int main()
{
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &Currencyvalue[i]);
    }

    scanf("%d", &Price);

    dfs(0, Price);

    return 0;
}
