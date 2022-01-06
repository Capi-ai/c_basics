/*
 * BIT MANIPULATION:
 */
 
/* Convert decimal to binary */

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
    // Find the upper limit of the decimal number
    // in terms of exponent of 2
    exp = find_exponent_value(exp, dec_num);
    printf("Value of exponent : %i\n",exp);
    printf("Binary number : ");
    for (int i = 0; i < exp; i++)
    {
	if ( ( dec_num - pow(2,exp-i) ) >= 0)
	{
	    printf("1");
	    dec_num = dec_num - pow(2,exp-i);
	}
	else
	{
	    printf("0"); 
	}
    }
    printf("\n");
}

int find_exponent_value( int exponent, short int decimal)
{
    while ((int) pow(2,exponent) < decimal)
    {   
        exponent++;
    }
    return exponent;
}

