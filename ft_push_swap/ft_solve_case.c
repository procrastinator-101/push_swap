/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:31:42 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/01 17:04:23 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_destroy_paths(t_list *paths)
{
	t_list	*path;

	path = paths->content;
	while (path)
	{
		next = path->next;
		ft_lstclear(path);
		path = next;
	}
}

t_list	*ft_update_path(t_list *path, int index)
{
	char	*str;
	t_list	*node;

	if (index == 1)
		str = "s";
	else if (index == 2)
		str = "r";
	else
		str = "rr";
	node = malloc(sizeof(t_list));
	ft_lstadd_back(&path, node);
	str = ft_strdup(str);
	if (!node || !str)
	{
		free(str);
		free(node);
		ft_lstclear(path);
		return (0);
	}
	node->content = str;
	node->next = 0;
	return (path);
}

void	ft_solve_case(t_solution *solution, t_stack src, t_list *path, \
			int nb_instuctions)
{
	int		i;
	t_stack	*tmp;

	if (ft_is_stack_sorted(&src, ASCENDANT))
	{
		if (solution->nb_instuctions > nb_instuctions)
		{
			ft_destroy_paths(solution->paths);
			solution->paths = 0;
			ft_lstadd_front(solution->paths, path);
		}
		else if (solution->nb_instuctions == nb_instuctions)
			ft_lstadd_front(solution->paths, path);
		return ;
	}
	if (nb_instuctions > solution->nb_instuctions)
		return ;
	i = -1;
	while (++i < 3)
	{
		tmp = ft_duplicate_stack(src);
		path = ft_update_path(path);
		ft_solve_case(solution, tmp, path, nb_instuctions + 1);
		ft_destroy_stack(&tmp);
	}
}
