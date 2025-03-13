#include <unistd.h>

int	main(int ac, char **argv)
{
	if (ac < 2)
	{
		write(1, "\n", 1);
	}
	
	int j;
	j = 0;
//	while (argv[1])
//	{
		while (argv[1][j])
		{
			write(1, &argv[1][j], 1);
			j++;
		}
}
