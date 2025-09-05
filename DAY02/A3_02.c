// Take two numbers and print remainder using %.



#include <stdio.h>

int main () {
    int a ,b ,remainder ;

    printf ("Enter the First Number :");
    scanf ("%d",&a);


    printf ("Enter the Second Number :");
    scanf ("%d",&b);

    remainder = a % b ;

    printf ("remainder = %d \n", remainder);
    return 0 ;
    
}