#include <stdio.h>

int main()
{
    //1. When size is given
    int matrix[3][3];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &matrix[i][j]);
    //     }
    //     getchar();
    // }
    //2. when n is not given
    int a, i = 0, j = 0;
    char x[3] = "ab";
    while (scanf("%*[^0-9 \n]%d", &a))
    {
        printf("%d ", a);
        scanf("%2[\n]", x);
        if (x[0] == '\n' && x[1] == '\n')
            break;
    }
}