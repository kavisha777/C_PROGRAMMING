// Ask the user for a number and print square and cube.


#include <stdio.h>

int main (){
     int num ,square , cube;

     printf ("Enter the Number :");
     scanf ("%d",&num);

      square = num * num ;
      cube = num * num * num ;


      printf ("square = %d \n ", square);
      printf ("cube = %d \n ", cube);


    return 0 ;
}