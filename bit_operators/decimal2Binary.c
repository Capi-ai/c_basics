/*
 * BIT MANIPULATION:
 */
 
/* Convert decimal to binary */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Function prototypes
int getMaxExp(int num);
int OneOrZero(int *num, int *exp);

//
void Decimal2Binary(int number)
{
    int exp = getMaxExp(number);
    int bin_coeff;
    while (exp >= 0)
    {
        bin_coeff = OneOrZero(&number, &exp);
        //printf("Decimal after function : %i\n",number);
        //printf("Exp after function : %i\n",exp);
	printf("%i",bin_coeff);
    }
    printf("\n");
}

/* FUNCTION SECTION */
int getMaxExp(int num)
{
    int exp = 0;
    while ( (int) pow(2,exp) < num )
    {
        exp++;	
    }
    //printf("The exponent is : %i\n",exp);
    return exp;
}

int OneOrZero(int *num, int *exp)
{
    //printf("Number : %i\n", *num);
    //printf("Exponent : %i\n", *exp);
    int det_bit = *num - pow(2,*exp);
    int bit;
    if ( det_bit > 0)
    {
        bit = 1;	
        *num = det_bit;
    }
    else if ( det_bit < 0)
    {
	bit = 0;
    }
    else 
    {
	bit = 1;
	*num = -1;
    }
    //Update decimal number and exp
    *exp = *exp - 1;
    return bit;
        
}
