#include <stdio.h>
#include <unistd.h>

void    ft_putnbr_base(int nbr, char *base);
int     checkbase(char *base);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int    basesize;
    int    arr[100];
    int    i;

    i = 0;
    basesize = 0;
    if (checkbase(base))
    {
        if (nbr < 0)
        {
            nbr = -nbr;
            ft_putchar('-');
        }
        while (base[basesize])
            basesize++;
        while (nbr)
        {
            arr[i] = nbr % basesize;
            nbr = nbr / basesize;
            i++;
        }
        while (--i >= 0)
            ft_putchar(base[arr[i]]);
    }
}

int checkbase(char *base)
{
    int n;
    int m;

    n = 0;
    m = 0;
    if (base[n] != '\0' || base[n + 1] != '\0') // check size
    {
        while (base[n] != '+' || base[n] != '-') // check sign
        {
            while (base[m] != '\0') // check repeat
            {
                while (base[n] != '\0')
                {
                    ++n;
                    if (base[n] == base[m])
                        return (0);
                }
                ++m;
                if (base[m] == '\0')
                    return (1);
            }
        }
    }
}

int main()
{
    char e[] = "amongus";
    int num;

    num = 39415739;
    printf("number: %d\n", num);
    printf("base: %s\n", e);
    ft_putnbr_base(num, e);
    return (0);
}