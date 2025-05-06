#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int tmp = x-1;
    for (int i = 1; i <= x; i++)
    {
        for (int a = tmp; a > 0; a--)
        {
            printf(" ");
        }
        tmp--;
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}