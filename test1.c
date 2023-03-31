#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//calculator program

int main()
{
    int a, b, c, d;
    printf("Enter 2 numbers:");
    scanf("%d%d", &a, &b);
    printf("Enter a number to do the square root:")
    scanf("%d", &c);
    printf("Enter the power you want to raise the number you just entered");
    scanf("%d", &d);
    printf("Sum= %d\n", a+b);
    printf("Difference= %d\n", a-b);
    printf("Product= %d\n", a*b);
    printf("Division= %d\n", a/b);
    printf("Square root:%d\n", sqrt(c));
    printf("Power:%d\n",pow(c,d));

    return 0;
}
