#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    scanf("%c",&a);
    if isdigit(a){
        printf("Digit");
    }
    else if (a=='a'||a=='A'||a=='E'|| a=='e'||
        a=='I'|| a=='i'||a=='O'|| a=='o'||
        a=='U'|| a=='u') {
        printf("Vowel");
    }
    else if ( a == "@"){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
}