/* Check if a number is even, odd or prime */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int number)
{
    /*
     * A prime number is divisible by one and itself.
     * Let's see if "number" fullfilled this condition 
     */
    int num_divisions = 0;

    //printf("Number in turn : %i\n",number);

    for (int i = 1; i<=number;i++)
    {
        if ( (number%i) == 0 )
	{
	    num_divisions++;    
	}
    }
    
    if (num_divisions == 2)
    {
        printf("Prime number found : %i\n",number);
	return 0;
    }


    return 1;
    
}

int isEven(int number)
{
    /*  
     * Even numbers are divisible by ...
     * 2
     */

     if (number % 2 == 0)
     {
         printf("Even number found : %i\n",number);	 
	 return 0;
     }

     return 1;

}

int isOdd( int number )
{
    /* Check if its odd */

    if (number % 2 == 1)
    {
        printf("Odd number found : %i\n",number);	
	return 0;
    }

    return 1;
}


