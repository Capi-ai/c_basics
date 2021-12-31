/*
 * Flexible Array Member. 
 */

/* Register a worker information */

// USAGE: ./fam_worker WorkerName id

// Libraries
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Structure 
struct worker
{
    int work_id;
    int name_len;
    char work_name[];
};

// Function prototybes
void printUsage(void);
struct worker *createWorker(struct worker *s, int id, char a[]);
void printWorker (struct worker *s);

// Main program
int main(int argc, char * argv[])
{

    // Check num of arguments 
    if ( argc != 3)
    {
        printUsage();
    }

    // Convert argument to number
    int w_id = atoi(argv[2]);

    // Create worker
    struct worker *Worker = createWorker(Worker,w_id,argv[1]);

    // Print information
    printWorker(Worker);
}

// Functions section
void printUsage(void)
{
    printf("ERROR: Arguments not provided.\nUSAGE: ./fam_worker WorkerName id\n");
    exit(-1);
}


struct worker *createWorker(struct worker *s, int id, char a[])
{
    s = malloc( sizeof(*s) + strlen(a) * sizeof(char)  );
    s->work_id = id;
    s-> name_len = strlen(a);
    strcpy( s->work_name, a );

    return s;
}

void printWorker(struct worker *s)
{
    printf("Worker ID : %d\n"
           "Worker Name : %s\n",
	   s->work_id, s->work_name
          );
}




