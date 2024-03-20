#include <stdio.h>

// Table of binomial coeffient

#define Max 10

int main()
{

    int bin, m, x;
    printf("mx");
    for (m = 0; m <= Max; m++)
    {
        printf("%4d | ", m);
    }
    printf("\n  - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   ");
    m = 0;
    do
    {
        printf("\n %d", m);
        x = 0, bin = 1;
        while (x <= Max)
        {
            if (m == 0 || x == 0)
            {
                printf("%4d | ", bin);
            }

            else
            {
                bin = bin * (m - x + 1) / x;
                printf("%4d | ",bin);
            }
            x = x + 1;
        }
        printf("\n");
        m++;
    }

    while (m <= Max);
    {
        printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  \n");
    }
}
