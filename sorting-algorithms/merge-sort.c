#include<stdio.h>
#include<stdlib.h>

void merge(int *arr, int s, int e, int mid){

   int len1 = mid-s+1;
   int len2 = e-mid;

   int *arr1 = (int*)malloc(len1*sizeof(int));
   int *arr2 = (int*)malloc(len2*sizeof(int));
   
   int k = s;

   for (int i = 0; i < len1; i++){
     arr1[i] = arr[k++];
   }
   
   for (int i = 0; i < len2; i++){
     arr2[i] = arr[k++];
   }

   int i = 0, j = 0;
   k = s;

   while ( i<len1 && j<len2){
    
    if (arr1[i] < arr2[j]){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    else{
        arr[k] = arr2[j];
        j++;
        k++;
    }
   }

   while (i<len1){
        arr[k] = arr1[i];
        i++;
        k++;
   }

   while (j<len2)
   {
        arr[k] = arr2[j];
        j++;
        k++;
   }

}

void mergeSort(int *arr, int s, int e){

  if ( s >= e){
    return;
  }
  
  int mid = (s+e)/2;

  //right side sorting
  mergeSort(arr, s, mid);

  //left side sorting
  mergeSort(arr, mid+1, e);

  //merge
  merge(arr,s,e,mid);

}

int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    for (int i = 0; i < arr_size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    mergeSort(arr, 0, arr_size-1);

    printf("\n The sorted array \n");
    for (int i = 0; i < arr_size; i++){
        printf("%d\t", arr[i]);
    }
    
    
    return 0;
}
