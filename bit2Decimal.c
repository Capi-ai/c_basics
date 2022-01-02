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
BIT getBinaryNum();
void convert2Decimal( BIT bit_num );

//
int main(int argc, char * argv[])
{
    BIT bit = getBinaryNum();

    convert2Decimal(bit);

    return 0;
    }

// Function Section
BIT getBinaryNum()
{
    
    BIT bit;
    printf("Enter the binary digit : ");
    scanf("%lld", &bit);
    return bit;
}

void convert2Decimal( BIT bit_num)
{
    int conv_factor;
    int decimal_version = 0;
    int counter = 0;
    while (bit_num != 0)
    {
        int digit = bit_num % 10;	
        bit_num = bit_num / 10;
        conv_factor = (int) pow(2,counter);
	printf("Binary digit : %d Factor : %d\n",digit,conv_factor);
	counter++;
	decimal_version += digit * conv_factor;
    }
    printf("Final Result %i\n", decimal_version);
    
}
