#include <unistd.h>

int main(int ac, char **argv)
{
	int j = 0;
	
	if (ac == 1)
	{
		write(1,"a",1);
	}
	else if (ac > 1)
	{
		while (argv[1][j])
		{	
			if (argv[1][j] == 'a')
			{	
				write(1,"a",1);
				j++;
			}
			j = 0;
		argv[1]++;
		}
	}
	write(1, "\n", 1);	
}		
