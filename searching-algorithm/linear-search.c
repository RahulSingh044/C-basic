#include <stdio.h>

int main() {
    
    int arr[] = {4,7,2,9,10,24,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 24;
    int flag = 0;
    for(int i=0; i<size; i++){
        if(key == arr[i]){
            printf("The %d is present at %d",key,i);
            flag++;
            break;
        }
    }
    if(flag=0){
        printf("The key is not found in the array");
    }
    return 0;
}