/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_umin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 21:46:48 by youness           #+#    #+#             */
/*   Updated: 2021/03/22 21:48:48 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support_functions.h"

unsigned long long	ft_umin(unsigned long long a, unsigned long long b)
{
	return (a < b ? a : b);
}
