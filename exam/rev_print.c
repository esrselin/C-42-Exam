#include <unistd.h>

int main(int ac, char **argv)
{
	if(ac < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		int i = 0;
		while (argv[1][i] != '\0')
		{
			i++;
		}
		while (argv[1][i-1] != '\0')
		{	
			write(1, &argv[1][i-1], 1);
			i--;
		}
	}
}
					
		
