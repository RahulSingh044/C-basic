#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int x, int n, int a, int b, int c) {
  //Write your code here.
  if(n==1) return a;
   else if(n==2) return b;
    else if(x==n) return c; 
     else return find_nth_term(x+1,n,b,c,c+a+b); 
   
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(3, n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
