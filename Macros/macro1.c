/*  Macros*/

/*
 * Create your own Macro in c
 */

// Libraries
#include <stdio.h>

// Preprocessor
#define PI 3.14
#define Circle_Area(x) ((PI)*x*x)

int main()
{
    int area =  Circle_Area(4);
    printf("Area is %d\n",area);
    return 0;
}
