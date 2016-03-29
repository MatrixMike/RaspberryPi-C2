/*

M Hewitt Saturday 30 August 2013 
inspired by work at Scotch College

// program to produce a table of "rotation day " for the Scotch term
*/
#include <stdio.h>
int main(void)
{
int j;

printf("\n Hi Mike\n");


printf("Scotch College 6 day rotation\n");
printf("            M    T    W    T    F\n");

 for ( j = 0 ; j < (10 * 5)+20; j++) {  // 10 weeks of 5 days

if (((j) % 5 ) == 0) {	printf("Week %2d   ",(j / 5)+1 ); }

	printf(" %2d  ", (j % 6 ) +1);	// j%6 goes 0 to 5 so +1 to get 1 to 6

	if (((j+1) %  5 ) == 0)   { // print newline every 5 days
		 printf("\n");
//		printf("Week ",j / 5);
}
  } // end of for loop

printf("\nEnd of term table\n");
// modulus.c 

  return 0;
} //end of prog


