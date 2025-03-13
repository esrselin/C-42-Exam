#include <unistd.h>

int counter(char c)
{
	int repeat = 0;
	
	if (c >= 'a' && c <= 'z')
	{
		repeat = c - 'a' + 1;
	}
	else if ( c >= 'A' && c <= 'Z')
	{
		repeat = c - 'A' + 1;
	}
	else
		repeat = 1;
	return (repeat);
}

int main(int ac, char **argv)
{	
	int repeat;
	if (ac >= 2)
	{
		while(*argv[1])
		{
			repeat = counter(*argv[1]);

			while(repeat--)
			{
				write(1, argv[1], 1);
			argv[1]++;
			}
				
		}
	}
	write(1, "\n", 1);
}
