#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double square_area (int a)
{
    return a*a;
}

double square_perimeter (int a)
{
    return 4*a;
}

double circle_area (int r)
{
    return 3.14*r*r;
}

double circle_perimeter (int r)
{
    return 2*3.14*r;
}

int main()
{
    int a, r;
    char shape[20];
    double area, perimeter;
    printf("Enter the type of shape: ");
    scanf("%s", shape);
    if(strcmp(shape, "square")==0)
    {
        scanf("%d", &a);
    area=square_area(a);
    perimeter=square_perimeter(a);
    }
    else if(strcmp(shape, "circle")==0)
    {
        scanf("%d", &r);
        area=circle_area(r);
        perimeter=circle_perimeter(r);
    }
    else
        printf("The shape you have chosen is not a square or circle!");
    printf("Area= %lf\n", area);
    printf("Perimeter= %lf\n", perimeter);

    return 0;
}
