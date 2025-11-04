#include<stdio.h>
char capital_to_small(cap)
{
    char sm = cap + 32;
    return sm;
}
int main()
{
    char in;
    scanf("%c",&in);
    printf("%c",capital_to_small(in));
    return 0;
}