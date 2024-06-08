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

int ft_sqrt(int nb)
{
double low;
double top;
double mid;

low = 0;
top = nb;
mid = nb/2;

while( (mid * mid) - nb > 0.001 || (mid * mid) - nb < - 0.001 )
{
    if( mid * mid - nb > 0.001)
    {
        low = low;
        top = mid;
        mid = (low + top) / 2;

    }
    else
    {    
        if( mid * mid - nb < -0.001) 
        { 
        low = mid;
        top = top;
        mid = (low + top) / 2 ;
        }
        else
        return (mid);
    }

}
return mid;
}

int main (void)
{
    printf("%d\n",ft_sqrt(15));
    return 0;
}