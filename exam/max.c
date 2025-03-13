int		max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	 int max = tab[0];
	
	if (len == 0)
		return 0;
	
	i = 0;
	while (i<len)
	{
		if(tab[i] >= max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>

int main()
{
	int tab[] ={-1,-2,-53,-150,-10,-90};
	printf("%d",max(tab,6 ));
}

	
	
			
		
