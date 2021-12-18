/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 11:38:13 by vfiszbin          #+#    #+#             */
/*   Updated: 2021/12/18 09:35:03 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *fmt, ...);
void	ft_printf2(char *fmt, ...);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putptr_base(unsigned long long nbr, char *base);
void	ft_put_uint_fd(unsigned int n, int fd);

#endif