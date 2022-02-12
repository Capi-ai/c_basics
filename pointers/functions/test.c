/* C Program */

/*
 * Description
 */

/* LIBRARIES */
#include <stdio.h>

/* Personal Macros */
#define printint(int_var) printf(#int_var " = %i\n",int_var)
#define printstr(str_var) printf(#str_var " = %s\n",str_var)
#define printdouble(double_var) printf(#double_var " = %f\n",double_var)
#define printfloat(float_var) printf(#float_var " = %f\n",float_var)

// Function prototypes
void programInfo();

int main( int argc, char* argv[])
{
    int arr1[] = {1,2,3,4,5,6,7};
    int *p = arr1;
    size_t arr_size = sizeof(arr1)/sizeof(arr1[0]);
    
    printf("Size of the array : %li\n",arr_size);
    //printf("Pointer value : %i \n",*p);

    // Print array element using pointers
    for (int i = 0; i< arr_size; i++)
    {
        printf("%d\n",*(p+i));
    }

    programInfo();
    return 0;
}

void programInfo()
{
    printf("\n");
    printf("\n");
    printf("%s compilated on %s at %s\n",__FILE__,__DATE__,__TIME__);
}
