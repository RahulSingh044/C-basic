#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Logic to reverse the array. */
    for (int i = 0; i < (num+1)/2; i++) {
       int temp = arr[i];
       arr[i] = arr[num-1-i];
       arr[num-i-1] = temp;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
