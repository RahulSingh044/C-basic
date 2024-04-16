#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int carry,l;
    printf("Enter a binary number");
    scanf("%s",&a);
    l= strlen(a);
    for (int i = 0; i < l; i++)
    {
        if (a[i]=='0')
        {
            a[i]='1';
        }
        else
         a[i]='0';
    }
    printf("The 1's compliment of binary number is %s \n",a);
    int i=strlen(a)-1;
    while (i>=0)
    {
        if(a[i]=='0')
        {
          a[i]='1';
          carry=0;
          break;
        }
        else 
         a[i]='0';
         carry=1;
         i=i-1;
    }
    printf("The 2's compliment of binary number is");
    if (carry=='1')
    {
        printf("1");
    }
    printf(" %s",a);
    return 0;
    
}
