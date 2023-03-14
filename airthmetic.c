#include<stdio.h>
int main()
{
    int a, b, ch;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    printf("Enter a choice:\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
       printf("Sum of a and b is %d\n", a+b);
       break;
    case 2:
       printf("Difference of a and b is %d\n", a-b);
       break;
    case 3:
       printf("Division of a and b is %d\n", a/b);
       break;
    case 4:
       printf("Mulltipllication of a and b is %d\n", a*b);
    default:
       printf("Enter correct choice:");
    }
    return 0;
}
