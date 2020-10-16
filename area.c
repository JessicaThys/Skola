/* Description: Area calculation  */
/* File name:   area.c            */
/* Date:        20201005          */
/* Author:      Jessica Thyselius */

#include "area.h"

double areaRectangle (double base, double height)
{
    return base*height;
}    
double areaTriangle (double bas, double hojd)
{
    return bas*hojd/2;
}
double areaCircle (double radius)
{
    return radius*radius*PI;
}