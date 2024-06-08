/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:46:02 by dnepomuc          #+#    #+#             */
/*   Updated: 2024/06/08 06:20:31 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>  

int ft_recursive_factorial(int nb) 
{
    if (nb < 0 || nb >= 13) 
    {
        return 0; 
    } 
    else if (nb == 0) 
    {
        return 1; 
    } 
    else 
    {
        return nb * ft_recursive_factorial(nb - 1);
    }
}

int main(void) 
{
    printf("%i \n", ft_recursive_factorial(0)); 
    return 0;
}

