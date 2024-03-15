#include <stdio.h>

 /* Swapping of number using pointers */
int main()
{
    
    int a, b;
    int *ptr1, *ptr2;
    printf("Enter the value of a and b \t");
    scanf("%d %d", &a, &b);
    ptr1 = &a;
    ptr2 = &b;
    printf("a=%d \t", *ptr2);
    printf("b=%d", *ptr1);
    return 0;
}

/* Swapping of digits if a number */

int main()
{
    int a, swap;
    printf("Enter a two digit number");
    scanf("%d", &a);
    swap = (a % 10) * 10 + (a / 10);
    printf("a=%d", swap);
    return 0;
}

/* Swapping of two  number without using third variable */

int main()
{
    int a, b;
    printf("Enter the value of a and b \t");
    scanf("%d %d", &a, &b);
    printf("Number before swapping a=%d b=%d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Number after swapping a=%d b=%d", a, b);
    return 0;
}

/* Swapping by function */

int swap(int *a , int *b){

int c;
c=*a;
*a=*b;
*b=c;
return;

}

int main(){
   int a , b;
   printf("Enter the valus of a and b \t ");
   scanf("%d %d ",&a,&b);
   printf("\n Before swapping a=%d \t b=%d",a,b);
   swap(&a,&b);
   printf("\n After swapping a=%d \t b=%d",a,b);

    return 0;
}

