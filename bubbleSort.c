#include <stdio.h>
int main()
{
    int Arr[]={2,3,4,1,7,10,5,8,6,9};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    
    printf("Initial Array :  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",Arr[i]);
    }
    
    for(int i=0; i<n; i++){
      for(int j=0; j<n-1; j++){
        if(Arr[j]>Arr[j+1]){
          int temp = Arr[j];
          Arr[j] = Arr[j+1];
          Arr[j+1] = temp;
        }
      }
    }

printf("\n Array after sorting :  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",Arr[i]);
    }
}
