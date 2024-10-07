#include <stdio.h>
int main()
{
    float side, area;
    printf("Enter the side of square:");
    scanf("%f", &side);
    area = side * side;
    printf("Area of the square is :%f", area);
}