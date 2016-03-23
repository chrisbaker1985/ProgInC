// x_to_the_n() raising x to the nth power, returns long int.
// takes two params x and n

long int x_to_the_n(const int x, const int n)
{
	int i;
	long int result = x;
	if(n == 0)
	{
		return 1;
	}
	
	for(i = 0; i < n; i++)
	{
		result *= x;
	}
}

int main(void)
{
	int x;
	long int x_to_the_n(int x, int n);
	
	
