#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(int ac, char **argv)
{
    int r;

    if (ac == 2)
    {
        r = ft_strlen(argv[1]);
        r--;

        while (r >= 0 && (argv[1][r] == '\t' || argv[1][r] == 32)) 
        {
            r--;
        }

        while (r >= 0 && argv[1][r] != '\t' && argv[1][r] != 32) 
        {
            r--;
        }

        r++;

        while (argv[1][r] != '\0')
        {
            write(1, &argv[1][r], 1);
            r++;
        }
    }

    write(1, "\n", 1);
    return 0;
}
