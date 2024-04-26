#include <stdio.h>

int main() {
    
    int arr[] = {5,7,9,14,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    int st = 0, end = size;
    int flag = 0;
  
    while( st<=end ){
        
         int mid = (st+end)/2; 
        
        if(key == arr[mid]){
            printf("The key %d is found at %d",key,mid);
            flag = 1;
            break;
        }
        else if(key < arr[mid]){
         end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    if(flag==0){
        printf("The key is not present in the array");
    }
    return 0;
}
