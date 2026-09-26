#include <stdio.h>

void countBits(int n, int ans[])
{
    ans[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        ans[i] = ans[i >> 1] + (i & 1);
    }
}

int main()
{
    int n = 5;
    int ans[n + 1];

    countBits(n, ans);

    printf("[");
    for (int i = 0; i <= n; i++)
    {
        printf("%d", ans[i]);

        if (i < n)
            printf(",");
    }
    printf("]");

    return 0;
}