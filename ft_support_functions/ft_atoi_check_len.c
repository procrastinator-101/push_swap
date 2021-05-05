/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:00:32 by youness           #+#    #+#             */
/*   Updated: 2021/05/05 18:01:48 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_support_functions.h"

int	ft_atoi_check_len(char *str, int *error, int *len)
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
	*len = i;
	if (str[sp] == '-')
		return (-ret);
	return (ret);
}
