/*
 * Dynamic memory allocation
 */ 

/*
 * The user enter a string
 * Enters the numbers of characters it has 
 * The input gets printed
 */

/* IMPORT LIBRARIES */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( int argc , char *argv[] )
{
  char * str = (char *) calloc (1,sizeof(char));
  int length;

  for ( int i = 0; i<argc-1; i++)
  {
    length = strlen (argv[i+1]) +1;
    printf ("Length of the word %s and space: %i\n", argv[i+1], length);
    str = (char *) realloc (str, length*sizeof(char));
    strcat(str,argv[i+1]);
    strcat(str," ");
  }

  printf ("Input : %s\n",str);

  //Free memory
  free(str);
 // printf ("%s\n",argv[2]); //Hallo, Guten morgen -> Guten
 // printf ("%d\n",argc-1);  // ./program Hallo, Guten Morgen -> 3
    

    return 0;
}
