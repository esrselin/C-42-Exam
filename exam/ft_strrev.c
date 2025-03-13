#include <unistd.h>
char    *ft_strrev(char *str)
{
	//int i = 0;
	int  size = 0;

	while(str[size] != '\0')
	{
		size++;
	}
	
	while(str[size-1])
	{
		write(1, &str[size-1], 1);
		size--;
	}
	
	return (str);
}
#include <stdio.h>
int main()
{
    char str[] = "esra";  // Burada string literal yerine karakter dizisi kullanıyoruz
    ft_strrev(str);
    
    return 0;
}
