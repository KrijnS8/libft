/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_build_path.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/08 17:28:27 by kschelvi      #+#    #+#                 */
/*   Updated: 2024/06/20 14:20:59 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_build_path(char *folder, char *file, char *extention)
{
	char	*path;
	char	*temp;

	if (!folder || !file || !extention)
		return (NULL);
	temp = ft_strjoin(folder, file);
	if (!temp)
		return (NULL);
	path = ft_strjoin(temp, extention);
	if (!path)
		return (free(temp), NULL);
	free(temp);
	return (path);
}
