// Your code here...
#include <stdio.h>
int avg(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main()
{
    scanf("%d%d%d",&a,&b,&c);
    int result = avg(int a,b,c);
    printf("%d",result);
}