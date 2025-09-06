// Positive, Negative, or Zero


#include <stdio.h>

int main () {

    int num ;

    printf ("Enter the Number : ");
    scanf ("%d", &num);

    if (num > 0) {
        printf ("It's POSITIVE \n ") ;
    }
    else if (num < 0) {
        printf ("It's NEGATIVE \n") ;
    } 
    else {
        printf ("It's ZERO \n") ;
    }
    return 0 ;
}