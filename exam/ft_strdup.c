
#include <stdlib.>

char *ft_strdup(char *src)
{
	int	i;
	int	size;
	int	*ptr;


	size = 0;
	i = 0;
	while (src[i])
	{
		i++;
	}
	if(!(size = malloc(sizeof(char)) * (i + 1)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}	
