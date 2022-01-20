/* Display information from
 * a file or from STDIN
 * USAGE: 
 *     ./a.out filename.txt --> dispay # of lines
                            and # of characters
 *     ./a.out ---> get the stdin information till 
                  Ctrl-D is presssed
		  --> Display # of lines and characters
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fileInfoDisp( char *filename);
void stdinInfoDisp(void);

int main( int argc, char * argv[])
{
 
    for (int i = 0; i == argc; i++)
    {
        printf("%s\n",argv[i]);	
    }

    if (argc == 2)
    {
	fileInfoDisp(argv[1]);
    }
    else if (argc == 1)
    {
        stdinInfoDisp();	
    }

    return 0;
    
}



void fileInfoDisp(char * filename)
{
    FILE *fp = NULL;
    fp = fopen(filename,"r");
    int fc = 0;
    int line_count = 0;
    int ch_count = 0;

    printf("Filename : %s\n",filename);

    if (fp == NULL )
    {
        printf("Error reading file.\n");
	exit(-1);
    }

    while( (fc=getc(fp)) != EOF )
    {
	putchar(fc);
	if (fc == '\n')
	{
	    line_count++;
	}
        if ( fc != ' ' )
	{
	    ch_count++;
	}
    }

    fclose(fp);
    printf("Total number of lines : %i\n",line_count);
    printf("Total number of characters : %i\n",ch_count-line_count);
}


void stdinInfoDisp(void)
{
    int ch = 0;
    int line_count = 0;    
    int ch_count = 0;
    while( (ch = getchar()) != EOF  )
    {
	// Count number of lines
	if ( ch == '\n')
	{
	    line_count++;    
	}
	// Count number of characters
	if (ch != ' ')
	{
	    ch_count++;    
	}
    }
    printf("Total number of lines : %i\n",line_count);
    printf("Total number of characters : %i\n",ch_count-line_count);
    
}
