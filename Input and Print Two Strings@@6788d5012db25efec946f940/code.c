#include <stdio.h>
#include <stdin>

int main()
{
    char n[100];
    printf("");
    fgets(n, stdin);
    printf("You entered: %s",n);
}