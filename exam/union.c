#include <unistd.h>

int main(int ac, char **argv)
{
	int i = 0;
	int j = 0;
	int counter = 0;
	
	if (ac == 3)
	{
		while(argv[1][i])
		{
			while(argv[2][j])
			{
				if(argv[1][i]== argv[2][j])
				{	
					counter ++;
				}
				j++;
			}
			if(counter % 2 != 0)
			 write (1, &argv[
