#include<stdio.h>
int main(){
    int Arr[] = {4,8,1,9,6};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    
    //Initial Array 
    printf("Initial Array :  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",Arr[i]);
    }
    
   for(int i=0; i<n; i++){
     int index = i;
      for(int j=i+1; j<n; j++){
        if(Arr[j]<Arr[index]){
           index = j;
        }
      }
    int temp = Arr[index];
    Arr[index] = Arr[i];
    Arr[i] = temp;
   }
   
   //sorted array 
   printf("The array after sorting is \n");
   for(int i=0; i<n; i++){
     printf("%d \t",Arr[i]);
   }
}
