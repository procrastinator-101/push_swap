/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 18:00:32 by youness           #+#    #+#             */
/*   Updated: 2021/11/05 12:09:06 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_support_functions.h"

static void	ft_set_error(long num, char *str, int sp, int *error)
{
	*error = 0;
	if (num > -(long)INT_MIN || (num == -(long)INT_MIN && str[sp] != '-'))
		*error = EIOF;
	else if (!ft_isnumber(str + sp))
		*error = ENAN;
}

int	ft_atoi_check_len(char *str, int *error, int *len)
{
	int		i;
	int		sp;
	int		ret;
	long	num;

	sp = 0;
	while (str[sp] == 32 || (str[sp] > 8 && str[sp] < 14))
		sp++;
	i = sp;
	if (str[sp] == '-' || str[sp] == '+')
		i++;
	num = 0;
	while (str[i] > 47 && str[i] < 58 && num < -(long)INT_MIN)
		num = num * 10 + (str[i++] - 48);
	ret = num;
	*len = i;
	ft_set_error(num, str, sp, error);
	if (str[sp] == '-')
		return (-ret);
	return (ret);
}
