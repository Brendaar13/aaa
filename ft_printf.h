#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

char 	*ft_strchr(const char *s, int c);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_base(long num, char *ptr, int base, char c_exit);
int	ft_printf(char const *str, ...);
