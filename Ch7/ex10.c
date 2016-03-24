// Function that returns if a number is prime or not

#include <stdio.h>

int getPositiveInt(void);
int isPrime(int n);

int main(void)
{
	//int n;
	
	//n = getPositiveInt();
	//printf("%i\n", isPrime(n));
	
	int i, prime;
	
	for(i = 3; i < 2000000000; i += 2)
	{
		if(i % 5 == 0)
		{
			continue;
		}
		
		prime = isPrime(i);
		
		if(prime == 1)
		{
			printf("%i\n", i);
		}	
		
	}
	return 0;
}

int isPrime(int n)
{
	int i;
	
	// Automatic primes
	if(n == 1 || n == 2 || n == 3)
	{
		return 1;
	}
	
	// Even numbers aren't prime...
	if(n % 2 == 0 || n % 5 == 0)
	{
		return 0;
	}
	
	for(i = 3; i < n / 2; i += 2)
	{
		if(i % 5 == 0)
		{
			continue;
		}
		
		if(n % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int getPositiveInt(void)
{
	int n = 0;	
	
	while(n <= 0)
	{
		printf("Give me a positive integer: ");
		scanf("%i", &n);
		if(n <= 0)
		{
			printf("Number must be positive!\n");
		}
	}
}
