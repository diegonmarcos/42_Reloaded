# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_foreach,c                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: despanad <despanad@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 03:26:05 by despanad          #+#    #+#              #
#    Updated: 2024/06/09 03:29:16 by despanad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while(i < length)
	{
		f(tab[i]);
		i++;
	}
}
