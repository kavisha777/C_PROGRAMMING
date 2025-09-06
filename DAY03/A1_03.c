// Ask the user for a number and check whether it is even or odd


#include <stdio.h>

int main () {
    int num ;


    printf ("Enter the Number :");

    scanf ("%d",&num);


    

    if (num%2==0){
        printf ("Even\n") ;
    }
    else {
        printf ("Odd\n");
    } 

    return 0 ;
}