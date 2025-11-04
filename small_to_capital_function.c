#include <stdio.h>
char small_to_capital(char sm)
{
    char cap;
    if (sm >= 'a' && sm <= 'z')
    {
        cap = sm - 32;
    }
    return cap;
}
int main()
{
    char in;
    scanf("%c", &in);
    printf("%c", small_to_capital(in));
    return 0;
}