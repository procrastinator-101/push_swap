/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:52:22 by youness           #+#    #+#             */
/*   Updated: 2021/03/25 19:45:49 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support_functions.h"

int	ft_atoi_check(char *str, int *error)
{
	int		i;
	int		sp;
	int		ret;
	long	num;

	sp = 0;
	*error = 0;
	while (str[sp] == 32 || (str[sp] > 8 && str[sp] < 14))
		sp++;
	i = sp;
	if (str[sp] == '-' || str[sp] == '+')
		i++;
	num = 0;
	while (str[i] > 47 && str[i] < 58 && num < -(long)INT_MIN)
		num = num * 10 + (str[i++] - 48);
	ret = num;
	if (num > -(long)INT_MIN || (num == -(long)INT_MIN && str[sp] != '-'))
		*error = EIOF;
	else if (str[i])
		*error = ENAI;
	return (str[sp] == '-' ? -ret : ret);
}
