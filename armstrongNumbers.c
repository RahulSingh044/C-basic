#include <stdio.h>
#include <math.h>
int main() {
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        int orgnum = i;
        int sum = 0;
        int l = (int)log10(i) + 1;
        int temp = i;
        while(temp>0){
            int r = temp % 10;
            sum += pow(r,l);
            temp = temp/10;
        }
        if(sum == orgnum){
            printf("%d is a armstrong number\n",orgnum);
        }
    }
    return 0;
}
