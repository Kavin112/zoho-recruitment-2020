#include <stdio.h>  
  
int main()  
{  
    int n=7,m=1,l=0;  
     
    char arr[7]="WELCOME";
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            int h=l/2;
            printf("%c ",arr[h++]);  
        }  
        printf("\n");  
        m++;  
    }  
    return 0;  
}  
