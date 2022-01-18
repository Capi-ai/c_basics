/*
 * C PROGRAM
 */

/*
 * Display the content of this file
 *
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int fc;

    /* Open current file */
    fp = fopen(__FILE__,"r");
    //Check file open correctly
    if ( fp == NULL)
    {
	printf("File not open correctly");
	return (1);
    }

    /* Print content */
    do {
	fc = getc(fp); //Read character
	putchar(fc); // Display character
	} while (fc != EOF);
    
    fclose(fp);
    return 0;
    }
