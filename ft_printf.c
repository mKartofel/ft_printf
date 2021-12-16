/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:22:15 by vfiszbin          #+#    #+#             */
/*   Updated: 2021/12/16 12:08:40 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdarg.h>
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


int ft_printf(const char *fmt, ...)
{
	va_list ap;
	char *vals;
	int i;
	va_start(ap, fmt);

	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i+1])
		{
			if (fmt[i+1] == 'd') 
				ecritentier(va_arg(ap, int));
			else if (fmt[i+1] == 's')
				for( vals = va_arg(ap, char *); *vals; vals++)
					putchar(*vals);
			else 
				break;
			i++;
		}	
		else
			putchar(fmt[i]);
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


int main() {
ft_printf("debut format entier %d puis chaine %s\n",  3, "la chaine");
ft_printf2("debut format entier %d puis chaine %s\n",  3, "la chaine");
printf("debut format entier %d puis chaine %s\n",  3, "la chaine");
return 0; }
