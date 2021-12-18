/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:22:15 by vfiszbin          #+#    #+#             */
/*   Updated: 2021/12/18 09:38:35 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

#include<stdio.h>
void	ecritentier(int n) 
{
int m=n%10;

if (n>=10) 
{ 
	ecritentier(n/10);
}
putchar ( m + '0' ) ;
}

typedef void (*func_ptr)(void *);
typedef void (**ptr_to_func_ptr)(void *);

int ft_printf(const char *fmt, ...)
{
	va_list ap;
	int i;
	va_start(ap, fmt);

	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i+1])
		{
			if (fmt[i+1] == 'd' || fmt[i+1] == 'i') 
				ft_putnbr_fd(va_arg(ap, int), 1);
			else if (fmt[i+1] == 's')
				ft_putstr_fd(va_arg(ap, char *), 1);
			else if (fmt[i+1] == 'c')
				ft_putchar_fd(va_arg(ap, int), 1);
			else if (fmt[i+1] == 'p')
			{
				ft_putstr_fd("0x", 1);
				ft_putptr_base( (unsigned long long)va_arg(ap, void *), "0123456789abcdef");
			}
			else if (fmt[i+1] == 'u') 
				ft_put_uint_fd(va_arg(ap, unsigned int), 1);
			else if (fmt[i+1] == 'x')
				ft_putnbr_base(va_arg(ap, int), "0123456789abcdef");
			else if (fmt[i+1] == '%')
				ft_putchar_fd('%', 1);
			else 
				break;
			i++;
		}	
		else
			ft_putchar_fd(fmt[i], 1);
		i++;
	}
	va_end(ap);
	return 0;
}


void ft_printf2(char *fmt, ...) {
va_list pa;
char *p, *vals;
int vali ;
va_start(pa, fmt);

for( p = fmt ; *p ; p++) 
{
	if (*p != '%') {putchar(*p); continue; }
	switch (*++p ) 
	{
		case 'd' : vali = va_arg(pa, int); ecritentier(vali); break ;
		case 's' : for( vals = va_arg(pa, char *); *vals; vals++) putchar(*vals ); break ; 
		default : putchar(*p);break ;
	}
}
va_end(pa);}
