#include <stdio.h>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int partition(int arr[], int s, int e)
{

    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // place pivot at right index
    int pivotIndex = s + count;
    swap(&arr[pivotIndex], &arr[s]);

    // handling left and right part of pivotIndex
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex){

        while (arr[i] <= pivot){
            i++;
        }

        while (arr[j] > pivot){
            j--;
        }
        
        if (i < pivotIndex && j > pivotIndex){
            swap(&arr[i++],&arr[j--]);
        } 
    }
    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
        return;

    // parition
    int p = partition(arr, s, e);

    // left part sorting
    quicksort(arr, s, p - 1);

    // right part sorting
    quicksort(arr, p + 1, e);
}

int main()
{

    int arr[] = {2, 4, 6, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
