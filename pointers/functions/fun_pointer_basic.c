/* C Program */

/*
 * Description
 * Given two arrays, with 10 elements,
 * the user decide which kind of operation perform
 * 
 */

/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/* Personal Macros */
#define printint(int_var) printf(#int_var " = %i\n",int_var)
#define printstr(str_var) printf(#str_var " = %s\n",str_var)
#define printdouble(double_var) printf(#double_var " = %f\n",double_var)
#define printfloat(float_var) printf(#float_var " = %f\n",float_var)

#define DEBUG 1
#define MIN_OPT 0
#define MAX_OPT 4


// Function prototypes
void programInfo();
int displayOptions();
int add(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[]);
int substract(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[]);
int multiply(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[]);
int division(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[]);
int redirectOption(int (*fun_pointer)(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[]), int usr_input, size_t arr1_size, int arr1[], size_t arr2_size, int arr2[]);


int main( int argc, char* argv[])
{
    // Arrays
    int arr1[] = {1,2,3,4,5,6,14};
    int arr2[] = {8,9,10,11,12,13,14};
    // Pointers to those arrays
    int *arr1_point = arr1;
    int *arr2_point = arr2;

    // Determine the size of the array
    size_t arr_size1 = sizeof(arr1)/sizeof(arr1[0]);
    size_t arr_size2 = sizeof(arr2)/sizeof(arr2[0]);

    // Function pointer
    int (*fun_pointer)(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[]);

    //Display options to perform with arrays
    int usr_input = displayOptions();

    // Redirect option to corresponding function
    redirectOption(fun_pointer,usr_input, arr_size1, arr1, arr_size2, arr2);
    
    return 0;
}

// Functions
void programInfo()
{
    printf("\n");
    printf("\n");
    printf("%s compilated on %s at %s\n",__FILE__,__DATE__,__TIME__);
}

// Function displayOptions
int displayOptions()
{
   // Store user input
   int usr_input;

   #ifdef DEBUG
       printf("Function : %s\n",__func__);
   #endif

   // Display instructions of the program
   printf("Which operation do you want to perform ?\n");
   printf("1 [Adding] \n");
   printf("2 [Substraction] \n");
   printf("3 [Multiplication] \n");
   printf("4 [Division] \n");
   printf("0 [Exit] \n");

   // Get user input
   scanf("%i",&usr_input);
   #ifdef DEBUG
       printf("This is your option : %i\n",usr_input);
   #endif

   // Check if the input is in the valid range
   if (usr_input <= MAX_OPT  && usr_input>=MIN_OPT )
   {
       return usr_input;
   }
   else 
   {   /* If not valid, use recurssion to ask again*/
       printf("\n");
       printf("\n");
       printf("Please select an option between 0 - 4");
       printf("\n");
       printf("\n");
       displayOptions();
       //exit(0);
   }
}

int redirectOption(int (*fun_pointer)(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[]), int usr_input, size_t arr1_size, int arr1[], size_t arr2_size, int arr2[])
{
   #ifdef DEBUG
       printf("Function : %s\n",__func__);
   #endif

   switch (usr_input)
   {
       case 1: // Adding numbers
         printf("Case 1\n");
	 fun_pointer = &add;
	 fun_pointer(usr_input,arr1_size, arr1, arr2_size, arr2);
	 break;
       case 2: // Substraction
         printf("Case 2\n");
	 fun_pointer = &substract;
	 fun_pointer(usr_input,arr1_size, arr1, arr2_size, arr2);
	 break;
       case 3: // Multiplication
         printf("Case 3\n");
	 fun_pointer = &multiply;
	 fun_pointer(usr_input,arr1_size, arr1, arr2_size, arr2);
	 break;
       case 4: // Division
         printf("Case 4\n");
	 fun_pointer = &division;
	 fun_pointer(usr_input,arr1_size, arr1, arr2_size, arr2);
	 break;
   }

   return 0;
}

int add(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[])
{
   #ifdef DEBUG
       printf("Function : %s\n",__func__);
   #endif
   int result[arr1_size];
       for (int i = 0; i < arr1_size; i++)
       {
	   result[i] = arr1[i]+arr2[i];
           printf("%d + %d = %d\n",arr1[i], arr2[i],result[i]);
       }

   return 0;
}
int substract(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[])
{
   #ifdef DEBUG
       printf("Function : %s\n",__func__);
   #endif
   int result[arr1_size];
       for (int i = 0; i < arr1_size; i++)
       {
	   result[i] = arr1[i]-arr2[i];
           printf("%d - %d = %d\n",arr1[i], arr2[i],result[i]);
       }
   return 0;
}
int multiply(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[])
{
   #ifdef DEBUG
       printf("Function : %s\n",__func__);
   #endif
   int result[arr1_size];
       for (int i = 0; i < arr1_size; i++)
       {
	   result[i] = arr1[i]*arr2[i];
           printf("%d * %d = %d\n",arr1[i], arr2[i],result[i]);
       }
   return 0;
}
int division(int input,size_t arr1_size, int arr1[], size_t arr2_size, int arr2[])
{
   #ifdef DEBUG
       printf("Function : %s\n",__func__);
   #endif
   int modulus[arr1_size];
   int reminder[arr1_size];
       for (int i = 0; i < arr1_size; i++)
       {
	   modulus[i] = arr1[i]/arr2[i];
	   reminder[i] = arr1[i]%arr2[i];
           printf("%d / %d = quotient : %d reminder : %d\n",arr1[i], arr2[i],modulus[i],reminder[i]);
       }
   return 0;
}


// Structure 
// Let arr1 and arr2 be two arrays of 10 elements
// Let fun_pointer be function pointer
// Let add(), substract(), multiply(), division() or none
  //--> The first four functions take two pointer arrays as arguments

// Choose what operation to perform between arr1 and arr2
  //--> A function that displays the options
  //--> Get input for the user (integer)
  //--> Check that the input is between a valid range
    //--> If not valid, break
    //--> else, store the input in a variable

// Redirect fun_pointer to the selected operation

// Function add()
  //--> Let size_1 and size_2 be the sizes of arr1 and arr2 
  //--> Let arr_add an array with the same size as arr1
  // Loop through the arrays at the same time
  // Add them and store in the corresponding position of arr_add
  // return the result

// Function substract()
  //--> Let size_1 and size_2 be the sizes of arr1 and arr2 
  //--> Let arr_subs an array with the same size as arr1
  // Loop through the arrays at the same time
  // Substract the and store in arr_subs
  // return the result

// Function multiply()
  //--> Let size_1 and size_2 be the sizes of arr1 and arr2 
  //--> Let arr_multiply an array with the same size as arr1
  // Loop through the arrays at the same time
  // Multiply the and store in arr_multiply
  // return the result

// Function division()
  //--> Let size_1 and size_2 be the sizes of arr1 and arr2 
  //--> Let arr_mod and arr_rem be arrays with the same size as arr1
  //--> Let arr_div be a two dimensional array 
    // where first dimension is equal to 2
    // and second dimension equal to the size of the arr1
  // Loop through the arrays at the same time
  // Divide, store mod in arr_mod and the reminder in arr_rem
  // save arr_mod and arr_rem in a two dimensional array

// Function None()
  // Exit the program

