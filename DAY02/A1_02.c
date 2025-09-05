// Ask the user for two numbers and print sum, difference, product, and quotient.


#include <stdio.h>

int main (){
    int a , b , sum ,difference ,product ;
    float quotient ;
    

    printf ("Enter the First Number : ");
    scanf("%d",&a) ;

    printf ("Enter the Second Number : ");
    scanf ("%d",&b);

    sum = a + b ;
    difference = a - b ;
    product = a * b ;
    quotient = a / b ;


    printf ("sum = %d \n", sum) ;
    printf ("difference =%d \n", difference) ;
    printf ("product = %d \n", product) ;
    printf ("quotient = %.0f \n", quotient) ;

    return 0 ;

}