/* Read file provided */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int fileLines(char *file_name)
{
    FILE *fp = NULL;
    int fc = 0;
    int counter = 0;
    char lin[MAX];

    printf("Reading file : %s\n",file_name);

    // Open of file
    fp = fopen(file_name,"r+");

    // Read correctly?
    if (fp == NULL)
    {
        perror("File not open correctly\n");
        exit(-1);
    }

    // How many lines are in the file
    while ( (fc=fgetc(fp)) != EOF )
    {
        /* In ASCII notation the end of a line is the number 10 */
        if ( fc == 10)
        {
            counter++; 
            }
    }

    fclose(fp);

    // Return content of file
    return counter;

}

void getContent(char* file_name, int buffer[], int counter )
{
    FILE *fp = NULL;
    char lin[MAX];
    char * ch_bf;

    // Open of file
    fp = fopen(file_name,"r+");

    // Read correctly?
    if (fp == NULL)
    {
        perror("File not open correctly\n");
        exit(-1);
    }
    
    // Read lines of file
    for (int i = 0; i<counter; i++)
    {
	if (fgets(lin,MAX,fp) != NULL)
	{
	    // convert char to int and save
            buffer[i] = strtol(lin, &ch_bf, 10); //strtol is a lifesaver!
	}
    }
    
    fclose(fp);

}
