#include<stdio.h>
#define N 5

int main(){
    int value[N];
    int i,j,n,x;
    for ( n = 0; n < N; n++)
    {
        printf("\n Enter employees in group \t");
        scanf("%d",&x);
        value[n]=x;
        printf("%d",value[n]);
    }

    printf("\n");
    printf("| \n");

    for ( n = 0; n < N; n++)
    {
        for ( i = 1; i <= 3; i++)
        {
            if (i==2)
            {
                printf("Group - %d |",n+1);
            }
            else 
              printf("|");

              for ( j = 1; j <=value[n]; j++)
                printf("*");
              
              if(i==2)
                 printf("(%d)\n",value[n]);

                 else
                  printf("\n");
            
        }
        printf("| \n");
        
    }
}
