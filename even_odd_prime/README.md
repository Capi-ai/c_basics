# Determine if a number is prime, even or odd

------------------------------
# Architecture Documentation
------------------------------


------------------------------
# Architecture Components
------------------------------
* Generate Random Numbers
**** gen_numbers.c ***** Ask the user how many numbers between 0 and 100 want to create. Save the numbers in a file (numbers.txt).

* Main Program
**** main.c **** Read the file with the numbers to be analysed. Check if they are prime, even or odd. 

Main used the following programs 

> * read_file.c This file has two functions. fileLines() determine the number of lines in the files. getContent() get the content of the file and save it into a buffer.
> * even_odd_prime.c This file has three functions. isPrime() determine if a number is prime. isEven() and isOdd() determine if the number is even or odd respectively.

------------------------------
# How to
------------------------------
* To run the program
'''shell
> gcc gen_numbers.txt -o gen_numbers
> ./gen_numbers
> gcc main.c read_file.c even_odd_prime.c -o main
> ./main
'''

