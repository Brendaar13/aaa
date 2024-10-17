#include "ft_printf.h"

int	type_base(unsigned int num, char *ptr, int len_base)
{
	char	array[20];
	int		c_printed;
	//int		res;
	int		i;

	i = 0;
	c_printed = 0;
	if (num == 0)
		return (ft_putchar(ptr[0]));
	if (num != 0)
	{
		//res = num % len_base;
		array[i++] = ptr[num % len_base];
		num = num / len_base;
		//++i;
	}
	while (i--)
		c_printed += ft_putchar(array[i]);
	return (c_printed);
}

int	ft_base(long num, char *ptr, int base, char c_exit)
{
	int	c_printed;

	c_printed = 0;
	if (c_exit == 'd' || /*c_exit == 'u' ||*/ c_exit == 'i')
	{
		c_printed += ft_putchar('-');
		num = -num;
	}
	else if (num == 0 && (c_exit == 'p'))
	{
		c_printed += ft_putstr("0x0");
		return (c_printed);
	}
	else if (c_exit == 'p')
	{
		c_printed += ft_putstr("0x");
		c_printed += type_base((unsigned int)num, ptr, base);
	}
	return (c_printed);
}
