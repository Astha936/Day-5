#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {  int a =1;
        
        for(int j=1;j<=n-i;j++)
        { 
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {      
        }
        printf("\n");

    }
    return 0;
}