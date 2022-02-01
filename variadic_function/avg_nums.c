/*
 * Variadic functions in C
 */


/* Pass any number of variables and
 * get their average, max and min values
 */

#include <stdarg.h>
#include <stdio.h>

// Function prototypes
int numAvg(int n, ...);

/* Main function */
int main(void)
{
    // Call variadic function
    numAvg(4,2,3,4,5);
    return 0;    
}


// Functions section
int numAvg( int n, ...)
{
    int sum = 0, arg;
    float avg;
    int max_num=0,min_num; // To store arg
    // Step 1:
    // Declare pointer to the
    // argument list
    va_list ptr,ptr2;

    // Step 2:
    /* Initialize argument to the list pointer */
    va_start(ptr, n);
    va_copy(ptr2,ptr);

    // Compute sum
    printf("The numbers are :\n");
    for ( int i = 0; i<n; i++ )
    {
	// Step 3: Access value
	arg = va_arg(ptr, int);
        printf("%i\n",arg);
	sum += arg;
    }
    // Determine average
    avg = (float) sum/n;
    // Free pointer
    va_end(ptr);
    printf("The sum is : %i\n", sum);
    printf("The average is : %f\n",avg);

    // Determine max & min numbers
    for (int j = 0; j<n; j++)
    {
	arg = va_arg(ptr2,int);
	// Determine max numbers
        if (arg > max_num)
	{
	    max_num = arg;    
	}
	// Determine min number
	if (j == 0)
	{
            min_num = arg;
	}
	else
	{
	    arg < min_num ? min_num = arg : 1 ;
	}
    } 
    printf("Max value : %i\n",max_num);
    printf("Min value : %i\n",min_num);

    va_end(ptr2);
}


