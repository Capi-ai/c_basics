/* Generate random numbers 
 * Save them into a file
 * "numbers.txt"
 */

# include <stdio.h>
# include <stdlib.h>

int main()
{
    // Store numbers on
    FILE *fp = NULL;

    // How many numbers to generate?
    int nums = 0;
    printf("Enter number of numbers to generate :");
    scanf("%i",&nums);

    //Open and check file
    fp = fopen("numbers.txt","a+");
    if (fp == NULL)
    {
        perror("Error opening file\n");	
	return (-1);
    }

    // Print "nums" random numbers
    // (between 1 and 100)
    for(int i = 0; i<nums; i++)
    {
	// Save numbers in a file
	fprintf(fp,"%i\n",rand()%100+1);
    }

    //Close file
    fclose(fp);
}
