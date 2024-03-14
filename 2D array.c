#include <stdio.h>

// Finding greatest  and smallest number in 1D array

int main(){

    int i,large,small,n;
    printf("Enter the size of Matrices : \t ");
    scanf("%d",&n);
    int ARR[n];
    printf("Enter the values in matrices\t");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ARR[i]);
    }

    large=ARR[0];
    small=ARR[0];

    for ( i = 1; i < n; i++)
    {
       if(ARR[i]>large){
         large=ARR[i];
       }
       if(ARR[i]<small){
        small=ARR[i];
       }

       }
       printf("Large = %d Small =%d ",large,small);
       return 0;
    }

// Addition of 2D array

int main()
{

    int i, j, a[3][3], b[3][3], c[3][3];
    printf("Enter the values for a 3*3 MAtrices A :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the values for a 3*3 MAtrices B:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }

        printf("\n");
    }

    printf("The Matrices C is : \t");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n %d \t", c[i][j]);
        }

        printf("\n");
    }
    return 0;
}


// Multiplication of 2D array

int main()
{

    int i, j, a[3][3], b[3][3], c[3][3], k;
    printf("Enter the values for a 3*3 MAtrices A :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the values for a 3*3 MAtrices B:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for ( k = 0; k < 3; k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);  
            }
            
        }

        printf("\n");
    }
     printf("The Matrices C is : \t");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", c[i][j]);
        }

        printf("\n");
    }
    return 0;
}
