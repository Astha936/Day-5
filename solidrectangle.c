#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    int m;
    printf("Enter the number of coloumns");
    scanf("%d",&m);
    for(int i=1;i<=4;i++)
    {
        for(int i=1;i<=4;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}