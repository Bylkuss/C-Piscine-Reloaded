/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <loadjou@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:05:16 by loadjou           #+#    #+#             */
/*   Updated: 2024/05/01 14:23:38 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	if (a && b)
	{
		swap = *a;
		*a = *b;
		*b = swap;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	a = 5, b;
	int	x = 20, y;
	int	p = -5, q;
	int	m = 100, n;
	int	p = -5, q;

	a = 5, b = 10;
	{
		printf("Before swap: a = %d, b = %d\n", a, b);
		ft_swap(&a, &b);
		printf("After swap: a = %d, b = %d\n", a, b);
	}
	{ // Test with more cases
		x = 20, y = 30;
		printf("\nBefore swap: x = %d, y = %d\n", x, y);
		ft_swap(&x, &y);
		printf("After swap: x = %d, y = %d\n", x, y);
	}
	{
		p = -5, q = -15;
		printf("\nBefore swap: p = %d, q = %d\n", p, q);
		ft_swap(&p, &q);
		printf("After swap: p = %d, q = %d\n", p, q);
	}
	{
		m = 100, n = 100;
		printf("\nBefore swap: m = %d, n = %d\n", m, n);
		ft_swap(&m, &n);
		printf("After swap: m = %d, n = %d\n", m, n);
	}
	{
		p = -5, q = -15;
		printf("\nBefore swap: p = %d, q = %d\n", p, q);
		ft_swap(NULL, &q); // Passing one null pointer
		printf("After swap: p = %d, q = %d\n", p, q);
	}
	return (0);
}
*/
