#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

const int maxn = 20;

int k;
int a[maxn];
int total = 0;
int ans = 1000000;

void dfs(int level, int sum1)
{
    if(level == k)
    {
        int sum2 = total - sum1;
        int diff = abs(sum1 - sum2);

        if(diff < ans)
        {
            ans = diff;
        }

        return;
    }

    // 第 level 件物品放第一堆
    dfs(level + 1, sum1 + a[level]);

    // 第 level 件物品放第二堆
    dfs(level + 1, sum1);
}

int main()
{
    scanf("%d", &k);

    for(int i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
        total += a[i];
    }

    dfs(0, 0);

    printf("%d\n", ans);

    return 0;
}
