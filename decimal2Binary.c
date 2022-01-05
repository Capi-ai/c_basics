/*
 * BIT MANIPULATION:
 */
 
/* Convert binary to decimal*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//
typedef long long int BIT;

// Function prototypes
short int getDecimalNum();
void convert2Decimal( short int dec_num );
int find_exponent_value( int exponent, short int decimal);
int find_binary_digit(int exp, int * dec_num);


//
int main(int argc, char * argv[])
{
    short int number = getDecimalNum();

    convert2Decimal(number);

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

void convert2Decimal( short int dec_num)
{
    printf("Decimal number : %i\n", dec_num);
    int exp = 0;
    int bin_digit;
    int new_dec_num;
    // Find the upper limit of the deciaml number
    // in terms of exponent of 2
    exp = find_exponent_value(exp, dec_num);
    printf("Exponent of two : %i. Power of two : %i\n",exp,(int)pow(2,    exp));
    for (int i = 0; i < exp; i++)
    {
	printf("Inside loop\n");
	// Find 1 or 0 accordng to the exponent of 2
	new_dec_num = dec_num;
	bin_digit = find_binary_digit(exp, &new_dec_num);
	printf("Binary digit : %i\n", bin_digit);
	printf("Decimal number : %i\n", new_dec_num);
    }
}

int find_exponent_value( int exponent, short int decimal)
{
    while ((int) pow(2,exponent+1) < decimal)
    {   
        exponent++;
    }
    return exponent;
}

int find_binary_digit(int exp, int * dec_num)
{
    do {
        *dec_num = *dec_num - (int) pow(2,exp);
	if (*dec_num < 0)
	{
	    return 0;
	}
	else if (*dec_num > 0)
	{
	    return 1;   
	}
	exp--;
    } while ( exp != 0 );
    
}
