#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
int	ft_strlen(const char *str);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putptr(unsigned long long n);
int	ft_putdec(int n);
int	ft_putudec(unsigned int n);
int	ft_putlowhex(unsigned int n);
int	ft_putupphex(unsigned int n);
int	ft_conv_proc(va_list param, const char *str);
int	ft_printf(const char *str, ...);
#endif
