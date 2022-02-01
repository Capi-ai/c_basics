/*
 * Variadic functions in C
 */


/* Pass any number of variables and
 * get their average
 */

#include <stdarg.h>
#include <stdio.h>

// Function prototypes
int numAvg(int n, ...);

int main(void)
{
    // Call variadic function
    numAvg(4,2,3,4,5);
    return 0;    
}


// Functions section
int numAvg( int n, ...)
{
    // Step 1:
    // Declare pointer to the
    // argument list
    va_list ptr;

    // Step 2:
    /* Initialize argument to the list pointer */
    va_start(ptr, n);

    for ( int i = 0; i<n; i++ )
    {
        printf("%i\n",va_arg(ptr, int));	
    }
    
    va_end(ptr);


}
