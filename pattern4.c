#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int star = x * 2 - 1;
    int tmp = 0;

    for (int i = x; i >= 1; i--)
    {
        for (int a = 0; a < tmp; a++)
        {
            printf(" ");
        }
        tmp++;
        for (int j = star; j >= 1; j--)
        {
            printf("*");
        }
        star = star - 2;
        printf("\n");
    }

    return 0;
}