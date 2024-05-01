/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:09:18 by loadjou           #+#    #+#             */
/*   Updated: 2024/05/01 13:28:39 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*res;
	unsigned int	len;

	if (!src)
		return (NULL);
	len = 0;
	while (src[len] != '\0')
		len++;
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (NULL);
	len = 0;
	while (src[len] != '\0')
	{
		res[len] = src[len];
		len++;
	}
	res[len] = '\0';
	return (res);
}
