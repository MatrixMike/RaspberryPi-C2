
// Classic Hello World

#include <stdio.h>


double gears[3]   ={ 1.2, 2.3, 3.4 };


int main(void)
{
printf(" length of 'gears' is %d\n", sizeof(gears) ) ;
printf(" a double is 8 bytes\n");
printf(" %d \n", sizeof(gears)/8 );


int i1 = 2;

printf("i1 = %2d\n", i1);
	int x; 
 for ( x = i1; x < 10; x++) { 
	printf("x =%2d\n", x);
	} 

   printf("Hello world!\n");
   return 0;
}
