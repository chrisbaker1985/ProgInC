/* This program calcualtes the sum of the digits of an integer.
 * Ex: 2155 would be 2 + 1 + 5 + 5 = 13 						*/
 
 #include <stdio.h>
 
 int main (void)
 {
	 int number, n, total = 0;
	 printf("What number would you like to add together as digits? ");
	 scanf ("%i", &number);
	 
	 printf("The sum of the numbers in %i is ", number);
	 do
	 {
		 n = number % 10;
		 total += n;
		 number /= 10;
	 }
	 while (number > 0);
	 
	 printf("%i!\n", total);
	 
	 return 0;
 }
	 
	 
		 
	 
