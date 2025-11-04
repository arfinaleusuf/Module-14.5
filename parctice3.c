#include <stdio.h>
int char_to_ascii(char in)
{
    int a = in;
    return a;
}
int main()
{
    char in;
    scanf("%c", &in);
    printf("%d", char_to_ascii(in));
    return 0;
}