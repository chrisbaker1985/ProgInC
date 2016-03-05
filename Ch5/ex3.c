/* This program accepts two integer values and displays the
 * result of dividing the first by the second to 3 decimal accuracy */
 
 #include <stdio.h>
 
 int main (void)
 {
	int a, b;
	 
	do
	{
		printf("Give me two integers to divide: ");
		scanf("%i %i", &a, &b);
		if(a == 0 || b == 0)
		{
			printf("Neither number may be 0!\n");
		}
	}
	while(a == 0 || b == 0);
	 
	printf("The result of %i divided by %i is %.3f\n", 
		a, b, (float) a / b);
		
	return 0;
}

	  
  
