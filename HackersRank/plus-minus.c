void plusMinus(int arr_count, int* arr) {
    
  int pos=0,neg=0,zero=0;
  for(int i=0; i<arr_count; i++){
      if(*(arr+i)>0.00) {
        pos++;
      }else if (*(arr+i)<0.00) {
      neg++;
      }else if (*(arr+i)==0.00) {
      zero++;
      }
  }
  double Arr[3];
  Arr[0]=(double)pos/(double)arr_count;
  Arr[1]=(double)neg/(double)arr_count;
  Arr[2]=(double)zero/(double)arr_count;
  
  for(int i=0; i<3; i++){
      printf("%lf \n",Arr[i]);
  }
}
