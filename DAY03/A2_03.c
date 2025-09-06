// Largest of Two Numbers


#include <stdio.h>

int main () {

    int x , y ;

    printf ("Enter First Number : ");
    scanf ("%d",&x);

    printf ("Enter First Number : ");
    scanf ("%d",&y);

    if (x>y){
        printf ("%d is a largest number \n",x);
    }
    else if (y>x ){
           printf ("%d is a largest number \n",y);
    }
    else {
        printf ("Both are EQUAL \n ");
    }

    return 0 ;
}