/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 12:59:23 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/11/11 12:53:41 by krijn         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"
#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_putuint(unsigned int n)
{
	int		n_len;
	char	c;

	n_len = 0;
	if (n > 9)
		n_len = ft_putuint(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	n_len++;
	return (n_len);
}

int	ft_putulint_base(unsigned long int n, char *base)
{
	unsigned long int	base_system;
	int					n_len;
	char				c;

	base_system = ft_strlen(base);
	n_len = 0;
	if (n >= base_system)
		n_len += ft_putulint_base(n / base_system, base);
	c = base[n % base_system];
	write(1, &c, 1);
	n_len++;
	return (n_len);
}
