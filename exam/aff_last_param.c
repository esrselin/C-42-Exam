#include <unistd.h>

int	main(int ac, char **argv)
{
	if(ac < 2)
	{
		write(1, "\n",1);
	}
	else
	{
		int i = ac -1;
		int j = 0;
			if(i > 0)
			{
			while(argv[i][j])
			{
				write(1, &argv[i][j],1);
				j++;
			}
		}
	}
}
