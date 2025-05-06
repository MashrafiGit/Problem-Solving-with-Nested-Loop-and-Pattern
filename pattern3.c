#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int tmp = 0;

    for (int i = x; i >= 1; i--)
    {
        for (int a = 0; a < tmp; a++)
        {
            printf(" ");
        }
        tmp++;
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}