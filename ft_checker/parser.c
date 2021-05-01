/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:11:35 by youness           #+#    #+#             */
/*   Updated: 2021/05/01 11:37:01 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	parser(int fd, t_stack *a, t_stack *b)
{
	int		ret;
	int		error;
	char	*line;

	ret = 1;
	error = 0;
	while (ret > 0)
	{
		ret = get_next_line(fd, &line);
		if (ret > 0)
		{
			error = execute_intruction(line, a, b);
			ft_verbose(a, b, 0);
		}
		free(line);
		if (error)
		{
			if (fd)
			{
				while (get_next_line(fd, &line) > 0)
					free(line);
			}
			ft_destroy_stack(b);
			manage_error(a, EII);
		}
	}
}
