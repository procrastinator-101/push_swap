/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomiser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:18:51 by youness           #+#    #+#             */
/*   Updated: 2021/04/06 22:50:47 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomiser.h"

int	main(int argc, char **argv)
{
	int	nb;
	int min;
	int	max;
	int	error;
	int	*randoms;

	if (argc < 2)
		return (0);
	if (argc > 1)
	{
		nb = ft_atoi_check(argv[1], &error);
		//if (error)
		//	display_error_msg(error);
	}
	if (argc > 2)
	{
		min = ft_atoi_check(argv[2], &error);
		//if (error)
		//	display_error_msg(error);
	}
	if (argc > 3)
	{
		max = ft_atoi_check(argv[3], &error);
		//if (error)
		//	display_error_msg(error);
	}
	randoms = generate_irandoms(nb, min, max);
	while (nb--)
		printf("%d ", randoms[nb]);
	printf("\n");
	return (0);
}
