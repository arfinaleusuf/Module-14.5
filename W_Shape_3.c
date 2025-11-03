#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    for(int i = 1; i<=n; i++)
    {
        for(int z = space; z>=1; z--)
        {
            printf(" ");
        }
        for(int j = 1; j<=i*2-1; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
    }
    int space1 = 1;
    for(int i = n; i>=1; i--)
    {
        for(int j = i*2-1; j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
        for(int s = 1; s<=space1; s++)
        {
            printf(" ");
        }
        space1++;
    }
    return 0;
}