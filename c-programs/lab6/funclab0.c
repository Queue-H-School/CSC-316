/*******************************************************************
 * funclab0.c
 * Quinn Helfand
 * 10/19/2026
 * ******************************************************************/

#include <stdio.h>
#include <math.h>

int main (void)
{
    int radius;
    double area;

    printf("/nEnter an integer for the radius: ");
    scanf("%d", &radius);
    printf("Entered: %d\n", radius);
    area = calcArea(radius);
    printf("main: a circle of radius %d has area %f.\n\n", radius, area);
    return 0;
}

int calcArea(int radius)
{
    printf("calcArea computed: %f\n", M_PI * radius * radius);
    return M_PI * radius * radius;
}