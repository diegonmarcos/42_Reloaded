/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:46:02 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/08 06:23:32 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb > 0 && nb < 13)
	{
		a = nb;
		while (a > 1)
		{
			a--;
			nb *= a;
		}
		return (nb);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf ("%i \n", ft_iterative_factorial(-5));
	return (0);
}
