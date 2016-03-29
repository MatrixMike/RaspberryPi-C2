  /*
 Program to calculate the value of a resistor in series with one or more LEDs
 Date sometime in August Spetember 2013
 Used as a demo for the electronics class at Electronics Club Altonta
 http://www.meetup.com/Electronics-Club-Altona/

*/
#include <stdio.h>
int main(void)
{
int j;

double VBAT,ILED,VLED;

//    double R;

VBAT=9.00; 	// battery voltage
ILED=0.020; 	// current through LED
VLED=2.10;	// voltage across LED

	printf(" VBAT = %f, VLED = %f, ILED = %f\n", VBAT, VLED, ILED);

 for ( j = 0 ; j < 6; j++) {
//   printf("Hello xworld!  %d  \n\n", j );

//  resistance Equals voltage divided by current  [voltage here can be replaced by potential difference ]

	printf("number of LEDs %d\n", j);
	printf(" Resistance = V/I : (VBAT - (%d * VLED))/ILED %3f Ohms\n\n" ,j, (VBAT - (j * VLED))/ILED  );

}

  return 0;
 // try changing the battery volatge and the number of LEDs (6 in the original)
}

