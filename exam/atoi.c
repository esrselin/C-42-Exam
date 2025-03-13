#include <unistd.h>

int  ft_atoi(char *str)
{	
	int i = 0;
	int s = 1;
	int r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	
	if (str[i] == '-')
	{
		s*= (-1);
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	
	while(str[i] >= '0' && '9' <= str[i])
	{
		r = (r * 10) + (str[i] - '0');
		str++;
	}
		return ( r * s);
}
