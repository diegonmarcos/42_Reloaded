/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnepomuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 13:22:48 by dnepomuc          #+#    #+#             */
/*   Updated: 2017/04/10 13:22:59 by dnepomuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

#define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

int ft_abs(int value)
{
    return ABS(value);
}

#endif

