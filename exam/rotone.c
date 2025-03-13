#include <unistd.h>

char rotone(char c)
{
	if((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
	{
		c+= 1;
	}
	else if (c == 'z' || c == 'Z')
	{
		if (c == 'z')
			c = 'a';
		else
			c = 'A';
	}
	return c;
}
int main(int ac, char **argv)
{
	int	i;
	
	i = 0;
	if (ac == 2)
	{
		while(argv[1][i])
		{
			char c =rotone(argv[1][i]);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
return 0;
}		
