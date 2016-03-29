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

printf("Scotch College 6 day rotation\n");
 for ( j = 1 ; j < 10 * 5; j++) {  // 10 weeks of 5 days
//   printf("Hello xworld!  %d  \n\n", j );

//  resistance equals voltage divided by current 
//	printf("number of LEDs %d\n", j);

	printf("  %2d  ",  (j % 6)  );

	if ((j %  5 ) == 0)   {
		 printf("\n");
	}

  } // end of for loop


printf("\nEnd of term table\n");
// satv2.c 

  return 0;
} //end of prog


