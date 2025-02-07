#include<stdio.h>
int main()  // print the pattern for alphabet and number alternately in differt rows
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {    int a = 1;
        for(int j=1;j<=i;j++)
        {
            int d = a+64;
            char ch =(char)d;   // to print characters A B C D and so on
            if(i%2==0)printf("%c ",ch);
            else printf("%d ", j);
            a++;
        }
        printf("\n");
    }
    return 0;
}