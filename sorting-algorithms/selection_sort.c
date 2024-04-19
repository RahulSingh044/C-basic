#include<stdio.h>

int swap(int *a, int *b ){
   int temp = *a;
   *a = *b;
   *b = temp; 
}

int selectionSort(int *arr, int size){
   for (int i = 0; i < size-1; i++)
   {
    int min_index = i;
     for (int j =i+1; j < size; j++)
     {
        if (arr[j] < arr[min_index])
           min_index = j;  
     }
      swap(&arr[min_index],&arr[i]);
   }  
}

int main(){
int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}