#include "ft_printf.h"


char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
 		++i;
	}
	if (s[i] == (char)c)
		return ((char *)(s +  i));
	return (0);
}
/*char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
			return ((char *) s);
		s++;
	}
	if (a == '\0')
		return ((char *)s);
	return (0);
}*/

int	ft_putchar(char c)
{
		write(1, &c, 1);
		return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return(ft_putstr("(null)"));
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return(i);
}
