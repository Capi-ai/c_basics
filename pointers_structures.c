/*                                                                                                                                                    
 * STRUCTURES IN C
 */
 
/*
 * This script contains the basic
 * syntax of structures in c
 */
 
/* IMPORT LIBRARIES */
#include <stdio.h>
#include <string.h>
 
// Create structure
struct person
{
    int age;
    char name[50];
    float weight;
    float height;
    char movie[50];
    char language[50];
    };

void printInfo(struct person *PersonN);
 
int main( int argc , char *argv[] )
{
   // Create a person structure variabel
   struct person Person1;
   struct person Person2;
 
   //Specify Person1
   Person1.age = 24;
   strcpy(Person1.name, "Albert Einstein");
   Person1.weight = 73;
   Person1.height = 1.72;
   strcpy(Person1.movie, "Saving Private Ryan");
   strcpy(Person1.language, "German English Spanish");
 
   //Specify Person2
   Person2.age = 25;
   strcpy(Person2.name,"Albert Nachname");
   Person2.weight = 80;
   Person2.height = 1.82;
   strcpy(Person2.movie,"Hercules");
   strcpy(Person2.language,"Farsi");
 
   // Print information of the Person
   printInfo (&Person1);
   printf("\n");
   printInfo(&Person2);
 
    return 0;
}

void printInfo (struct person *PersonN)
{
   // Print info of the first person
   printf("Person 1 Name: %s\n",PersonN->name) ;
   printf("Person 1 Age : %i\n", PersonN->age);
   printf("Person 1 Weight : %f\n",PersonN->weight);
   printf("Person 1 height : %f\n",PersonN->height); 
   printf("Person 1 Movie : %s\n",PersonN->movie);
   printf("Person 1 Language : %s\n", PersonN->language);
    }

