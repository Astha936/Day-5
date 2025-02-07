#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    int nap= 1;
    
    for(int i=1;i<=n;i++)
    { int a =1;
        
         for(int k=1;k<=n-i;k++)    //for spaces
    {
        printf(" ");
    }   
    
        for(int j=1;j<=nap;j++)
        {  
            int d = a+64;
        char ch =(char)d;
            printf("%c",ch);
            a++;
        }
        nap = nap+2;
        printf("\n");
    }
    return 0;
}