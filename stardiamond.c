#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    int nsp = n/2;
    int nst = 1;
    int ml = n/2+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)    // to print spaces
        {
            printf(" ");
        }
        for(int k=1;k<=nst;k++)  // to print stars
        {
            printf("*");
        }
        if(i<ml){               //  to print middle line and lower side of the star diamond
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}