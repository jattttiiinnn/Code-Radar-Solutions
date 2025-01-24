#include <stdio.h>

int main()
{
    char name[100];
    int age;
    char hobby[100];
    scanf("%s\n",name);
    scanf("%d\n",&age);
    scanf("%s\n",hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
}