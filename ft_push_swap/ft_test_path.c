/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:01:18 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 18:37:43 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_path	*ft_get_path(void)
{
	int		ret;
	char	buffer[10];
	t_path	*path;

	printf("---------------------------------------------------------------\n");
	path = 0;
	while (1)
	{
		ret = read(0, buffer, 5);
		if (ret < 1)
			break ;
		buffer[ret - 1] = 0;
		if (ret > 2)
			ft_path_pushback(&path, buffer);
	}
	printf("---------------------------------------------------------------\n");
	return (path);
}

int	main()
{
	t_path	*p1;
	t_path	*p2;
	t_path	*path;

	p1 = ft_get_path();
	p2 = ft_get_path();
	ft_path_print(p1);
	ft_path_print(p2);
	path = ft_path_intersect(p1, p2);
	ft_path_print(path);
	return (0);
}
