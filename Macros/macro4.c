/*
 * Predefined Macros in C
 */

// 
//
#include <stdio.h>

void printMessage();

int main()
{
    printf("__FILE__ : %s\n",__FILE__);
    printf("__LINE__ : %d\n",__LINE__);
    printMessage();
    printf("Compilation on %s at %s\n",__DATE__,__TIME__);
    return 0 ;
}

void printMessage()
{
    printf("__func__ : %s\n",__func__);
}
