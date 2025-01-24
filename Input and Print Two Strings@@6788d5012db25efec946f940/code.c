#include <stdio.h>

int main()
{
    char n[100];
    printf("");
    fgets(n, sizeof(n), stdin);
    printf("You entered: and %s",n);
}