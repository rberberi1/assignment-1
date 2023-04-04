#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function to calculate the sum of 2 numbers
void sum()
{
    double a, b, sum;
    scanf("%lf%lf", &a, &b);
    sum=a+b;
    printf("%lf",sum );
}

//function to calculate the difference of 2 numbers
void subtraction ()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%lf",a-b );
}

void multiplication ()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%lf",a*b );
}

void division ()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%lf",a/b );
}

void power ()
{
    double a, m, x;
    scanf("%lf%lf", &a, &m);
    x=pow(a, m);
    printf("%lf",x );
}

void square_root()
{
    double a, x;
    scanf("%lf", &a);
    x=sqrt(a);
    printf("%lf",x );
}

int main()
{
    double a, b, m, x;
    char sign;
    printf("Enter the calculation operation: ");
    scanf("%c", &sign);
    switch (sign)
    {
    case'+':
        sum();
        break;
    case '-':
        subtraction();
        break;
    case '*':
        multiplication();
        break;
    case '/':
        division();
        break;
    case '^':
        power();
        break;
    case '~':
        square_root();
        break;

    }
    return 0;
}
