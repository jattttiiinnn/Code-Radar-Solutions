#include <stdio.h>
#include <stdin.h>

int main()
{
    char n[100];
    printf("");
    fgets(n, stdin);
    printf("You entered: %s",n);
}