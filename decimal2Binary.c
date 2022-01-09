/*
 * BIT MANIPULATION:
 */
 
/* Convert decimal to binary */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Function prototypes
short int getDecimalNum();
short int getMaxExp(short int num);
short int OneOrZero(short int *num, short int *exp);

//
int main(int argc, char * argv[])
{
    short int number = getDecimalNum();
    short int exp = getMaxExp(number);
    short int bin_coeff;
    while (exp >= 0)
    {
        bin_coeff = OneOrZero(&number, &exp);
        //printf("Decimal after function : %i\n",number);
        //printf("Exp after function : %i\n",exp);
	printf("%i",bin_coeff);
    }
    printf("\n");
    return 0;
    }

/* FUNCTION SECTION */
short int getDecimalNum()
{
    
    int dec_num;
    printf("Enter the decimal number : ");
    scanf("%d", &dec_num);
    //printf("Decimal number : %i\n", dec_num);
    return dec_num;
}

short int getMaxExp(short int num)
{
    int exp = 0;
    while ( (int) pow(2,exp) < num )
    {
        exp++;	
    }
    //printf("The exponent is : %i\n",exp);
    return exp;
}

short int OneOrZero(short int *num, short int *exp)
{
    //printf("Number : %i\n", *num);
    //printf("Exponent : %i\n", *exp);
    short int det_bit = *num - pow(2,*exp);
    short int bit;
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
