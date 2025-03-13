#include <unistd.h>

void write_number(int number)
{
	if (number > 9)
		write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int main(void)
{
	int c = 1;
	while(c <= 100)
	{
			
		if( c % 3 == 0 && c % 5 == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		else if (c % 3 == 0)
		{
			write(1, "fizz\n", 5);
		}
		else if (c % 5 == 0)
		{
			write(1, "buzz\n", 5);
		}
		else
		{	
			write_number(c);
			write(1, "\n", 1);
		}
	c++;
	}
}

		
