int  sum (int count,...) {
    int add=0;
   va_list args;
   va_start(args, count);
   for(int i=0; i<count; i++)
   {
       add += va_arg(args,int);
   }
   va_end(args);
   return add;
}

int min(int count,...) {
    va_list args;
    va_start(args,count);
    int min = va_arg(args, int);
    for(int i=1; i<count; i++)
    {
        int current =  va_arg(args,int);
        if(current < min){
            min = current;
        }
    }
    va_end(args);
    return min;
}    

int max(int count,...) {
   va_list args;
    va_start(args,count);
    int max = va_arg(args, int);
    for(int i=1; i<count; i++)
    {
        int current =  va_arg(args,int);
        if(current > max){
            max = current;
        }
    }
    va_end(args);
    return max;
}