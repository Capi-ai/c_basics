#include <stdio.h>

int main()
{
    /* Create enum type w/ allow values*/
    enum Companies {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    
    /* Create vairables enum and assign values */
    enum Companies company1, company2, company3;
    company1 = XEROX; 
    company2 = GOOGLE;
    company3 = EBAY;

    /* Print them  */
    printf("%d\n", company1);    
    printf("%d\n", company2);    
    printf("%d\n", company3);
    /* Exit the code successfully */
    return 0;
    }
