#include <stdio.h>

int main()
{
    int a = 11;
    int b, c;
    a = a - 2;
    while (a > 0)
    {
        printf("Total:%d ", a);
        if (a == 1)
        {
            printf("You lose!");
            a--;
            break;
        }

        printf("User:");
        scanf("%d", &b);
        a = a - b;
        printf("Total:%d", a);
        c = (a % 4) - 1;
        if (c < 0)
            c = 3;
        printf("Computer: %d\n", c);
        a = a - c;
    }
}