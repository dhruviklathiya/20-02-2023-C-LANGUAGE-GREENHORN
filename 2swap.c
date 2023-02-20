#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value A");
    scanf("%d",&a);
    printf("Enter value B");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("Enter value A:%d",a);
    printf("Enter value B:%d",b);
    return 0;
}