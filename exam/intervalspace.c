#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	
}

int main(int ac, char **argv)
{
	int i = 0;
	int j = 0;
	while (ac == 3)
	{
		while(argv[2][j])
		{
			if(argv[1][i] == argv[2][j])
				i++;
			if(!argv[1][i])
			{
				ft_putstr(argv[1]);
				return 0;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
