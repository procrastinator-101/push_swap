/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_umax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 10:34:17 by yarroubi          #+#    #+#             */
/*   Updated: 2021/03/22 21:52:21 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support_functions.h"

unsigned long long	ft_umax(unsigned long long a, unsigned long long b)
{
	return (a < b ? b : a);
}
