int	    is_power_of_2(unsigned int n)
{
	if (n==0)
		return (0);
	while(n % 2 == 0)
		n /=2; 
	if (n == 1)
 		 return 1;
	else
		return 0;
	

}

#include <stdio.h>

int main()
{
	printf("%d", is_power_of_2(4));
	printf("%d", is_power_of_2(0));
	printf("%d", is_power_of_2(256));
	printf("%d", is_power_of_2(100));
}

