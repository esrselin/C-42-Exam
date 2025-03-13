#include <unistd.h>

int main(int ac, char **src)
{
	int i = 0;
	if (ac == 2)
	{
	while (src[1][i] == ' ' || src[1][i] == '\t')
		i++;
	while (!(src[1][i] == ' ' || src[1][i] == '\t'))
	{	
		write(1, &src[1][i], 1);
		i++;
	}        
        write(1, "\n", 1);
	}
}

// "	 	 asfkhjb  "	
