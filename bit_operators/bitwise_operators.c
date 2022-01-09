/*
 * Bitwise operators
 */

/*  Program that apply the following operators to
    two numbers : & , | , ^ , << , >> */

#include <stdio.h>
#include <stdlib.h>
#include "decimal2Binary.h"

// Function Prototypes
void AndOperator(int num1, int num2);
void OrOperator(int num1, int num2);
void ExOrOperator(int num1, int num2);
void RShiftOperator(int num);
void LShiftOperator(int num);

int main( int argc, char * argv[])
{

    int num1, num2;
    // Ask for two numbers
    printf("Enter first number : ");
    scanf("%i",&num1);
    printf("Enter second number : ");
    scanf("%i",&num2);

    // AND Operator
    AndOperator(num1,num2);

    // OR Operator
    OrOperator(num1,num2);

    // Exclusive OR Operator
    ExOrOperator(num1,num2);

    // Right Shift Operator (by 2)
    RShiftOperator(num1);
    RShiftOperator(num2);

    // Left Shift Operator (by 2)
    LShiftOperator(num1);
    LShiftOperator(num2);

    return 0;
}

void AndOperator(int num1, int num2)
{
    printf("\n");
    printf("AND BITWISE OPERATOR\n");
    printf("(decimal) %i&%i = %d\n",num1,num2,num1&num2);
    printf("(binary)\n");
    Decimal2Binary(num1);
    Decimal2Binary(num2);
    printf("----------\n");
    Decimal2Binary(num1&num2);
    printf("\n");

}

void OrOperator(int num1, int num2)
{
    printf("\n");
    printf("OR BITWISE OPERATOR\n");
    printf("(decimal) %i&%i = %d\n",num1,num2,num1|num2);
    printf("(binary)\n");
    Decimal2Binary(num1);
    Decimal2Binary(num2);
    printf("----------\n");
    Decimal2Binary(num1|num2);
    printf("\n");
}

void ExOrOperator(int num1, int num2)
{
    printf("\n");
    printf("Exclusive OR BITWISE OPERATOR\n");
    printf("(decimal) %i&%i = %d\n",num1,num2,num1^num2);
    printf("(binary)\n");
    Decimal2Binary(num1);
    Decimal2Binary(num2);
    printf("----------\n");
    Decimal2Binary(num1^num2);
    printf("\n");
        
}

void RShiftOperator(int num)
{
    printf("\n");
    printf("RIGHT SHIFT OPERATOR\n");
    printf("(decimal) %i>>2 = %d\n",num,num>>2);
    printf("(binary)\n");
    Decimal2Binary(num);
    printf("----------\n");
    Decimal2Binary(num>>2);
    printf("\n");
        
}

void LShiftOperator(int num)
{
    printf("\n");
    printf("RIGHT SHIFT OPERATOR\n");
    printf("(decimal) %i<<2 = %d\n",num,num<<2);
    printf("(binary)\n");
    Decimal2Binary(num);
    printf("----------\n");
    Decimal2Binary(num>>2);
    printf("\n");
        
}
