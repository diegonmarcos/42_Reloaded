/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <dnepomuc@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 17:17:08 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/08 04:06:55 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	x;

	x = 'a';
	while (x < 'z')
	{
		ft_putchar(x);
		x++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
