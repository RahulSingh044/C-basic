#include <stdio.h>
#include <stdlib.h>
 
int *increaseArr(int *Arr, int size)
{
    int new_size;
    printf("Enter new Size for array: \t");
    scanf("%d", &new_size);
    int *newArr = (int *)realloc(Arr, new_size * sizeof(int));
    if (new_size == NULL)
    {
        printf("\n Memory allocation failed !!!");
        return Arr;
    }
    else
    {
        for (int i = size; i < new_size; i++)
        {
            newArr[i] = 0;
        }
        printf("\n The new array is \n");
 
        for (int i = 0; i < new_size; i++)
        {
            printf("%d \t", newArr[i]);
        }
    }
}
 
int *decreaseArr(int *Arr, int size)
{
    int new_size;
    printf("Enter new Size for array: \t");
    scanf("%d", &new_size);
    int *newArr = (int *)realloc(Arr, new_size * sizeof(int));
    if (new_size == NULL)
    {
        printf("\n Memory allocation failed !!!");
        return Arr;
    }
 
     printf("\n The new array is \n");
 
        for (int i = 0; i < new_size; i++)
        {
            printf("%d \t", newArr[i]);
        }
}
 
int main()
{
    int size, x;
    printf("Enter the size of array \t ");
    scanf("%d", &size);
    int *Arr = (int *)malloc(size * sizeof(int));
    if (Arr == NULL)
    {
        printf("\n Unable to allocate the memory!!!");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        Arr[i] = i + 4;
    }
    printf("\n The elements of array are : \n ");
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", Arr[i]);
    }
 
    printf(" \n Enter to \n 1.Increase Array Size \n 2.Decrease Array size\n");
    scanf("%d", &x);
 
    switch (x)
    {
    case 1:
        increaseArr(Arr, size);
        break;
    case 2:
        decreaseArr(Arr, size);
        break;
    }
}
