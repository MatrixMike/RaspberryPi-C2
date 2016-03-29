/*
Copyright (c) 2012, Broadcom Europe Ltd
All rights reserved.


// Classic Hello World
*/
#include <stdio.h>
int main(void)
{
int j;

double VBAT,ILED,R,VLED;
VBAT=9.00;
ILED=0.020;
VLED=2.00;
//	printf(" VBAT = %f, VLED = %f, ILED = %f\n", VBAT, VLED, ILED);


 for ( j = 0 ; j < 25; j++) {
//   printf("Hello xworld!  %d  \n\n", j );

//  resistance equals voltage divided by current 
//	printf("number of LEDs %d\n", j);




	printf("day %2d weekday %2d  scotch day %2d \n",j+1,  (j % 5)+1, (j % 6)+1 );
//	printf(" Resistance = V/I : (VBAT - (%d * VLED))/ILED %f Ohms\n\n" ,j, (VBAT - (j * VLED))/ILED  );

}

  return 0;

}
// first.c Saturday

