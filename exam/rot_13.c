#include <unistd.h>

//void ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

int	rot13(char c)
{
	if(c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M' )
	{
		c += 13;
	}
	else if (c >= 'n' && c <= 'z' || c >= 'N' && c <= 'Z')
	{
		c -=13;
	}
	return c;
} 

int main (int ac, char **argv)
{
	if(ac < 2)
	{
		write(1, "\n",1);
	//	ft_putchar('\n');
	}
	else
	{
		int i = 0;

		while(argv [1][i])
		{	
			 char c=rot13(argv[1][i]);

			write(1, &c,1);
			//ft_putchar(rot13(argv[1][i]));
			i++;
		}
	}
	  write(1, "\n",1);

	//ft_putchar('\n');
}
	
