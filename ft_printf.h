/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/17 17:11:28 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/04/25 12:54:39 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BASE_10 "0123456789"
# define BASE_16_LOWERCASE "0123456789abcdef"
# define BASE_16_UPPERCASE "0123456789ABCDEF"

int	ft_putchar(char c, int fd);
int	ft_putstr(char *s, int fd);
int	ft_putnbr(int n, int fd);
int	ft_abs(int n);
int	ft_putuint_base(unsigned int n, char *base, int fd);
int	ft_putulint_base(unsigned long int n, char *base, int fd);
int	ft_putptr(void *ptr, int fd);
int	ft_putuint(unsigned int n, int fd);

#endif