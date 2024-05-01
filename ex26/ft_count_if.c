/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:11:49 by loadjou           #+#    #+#             */
/*   Updated: 2024/05/01 14:44:37 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	j;

	if (!tab || !f)
		return (0);
	i = 0;
	j = 0;
	while (tab[i] && tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
