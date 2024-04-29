/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:06:01 by loadjou           #+#    #+#             */
/*   Updated: 2024/04/29 13:06:05 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
