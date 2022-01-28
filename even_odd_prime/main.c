/* Even, Odd or Prime ? */

#include <stdio.h>
#include <stdlib.h>
#include "read_file.h"
#include "even_odd_prime.h"

//#define MAX 100

int main()
{
    //Name of the file
    char * file_name = "numbers.txt";

    // How many lines are on the file
    int lines_num = fileLines(file_name);

    // Where to store the content of the file
    int file_content[lines_num + 1];
    
    // What is the content of the file?
    getContent( file_name, file_content, lines_num);

    // Eval each number
    int status; // Is its even, no need to check other options
    for (int i = 0; i<lines_num; i++)
    {
        //printf("%i\n",file_content[i]);	

	// Is prime
        status = isPrime(file_content[i]);
	if (status == 0)
	{ continue; }

	// Is even
	status = isEven(file_content[i]);
	if (status == 0)
	{ continue; }

	// Odd
	status = isOdd(file_content[i]);
    }

    return 0;    
}
