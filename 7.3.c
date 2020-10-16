/* Description: Area calculation  */
/* File name:   7.3.c             */
/* Date:        20201005          */
/* Author:      Jessica Thyselius */

#include <stdio.h>
#include "area.h"
#define PI 3.141592653589793

int main()
{
    // Rectangle area.
    double areaOfRectangle, base, height;
    printf("Base of rectangle: ");
    scanf("%lf", &base);
    printf("Height of rectangle: ");
    scanf("%lf", &height);
    // Call of function.
    areaOfRectangle = areaRectangle (base, height);
    printf("The area of the rectangle is: %.0f", areaOfRectangle);
    printf("\n");
    
    // Triangle area.
    double areaOfTriangle, bas, hojd;
    printf("Base of triangle: ");
    scanf("%lf", &bas);
    printf("Hight of triangle: ");
    scanf("%lf", &hojd);
    // Call of function.
    areaOfTriangle = areaTriangle (bas, hojd);
    printf("The area of the triangle is: %.0f", areaOfTriangle);
    printf("\n");
    
    // Circle area
    double areaOfCircle, radius;
    printf("Radius of circle: ");
    scanf("%lf", &radius);
    // Call of function.
    areaOfCircle = areaCircle (radius);
    printf("The area of the circle is: %.0f", areaOfCircle);
    printf("\n");
    return 0;
}