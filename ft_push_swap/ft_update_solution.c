/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_solution.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 23:08:29 by youness           #+#    #+#             */
/*   Updated: 2021/05/06 15:52:30 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_update_solution(t_solution *solution, t_list *path, int nb_instuctions)
{
	t_list	*paths;
	t_list	*new_path;

	if (solution->nb_instuctions < nb_instuctions || !nb_instuctions)
		return (0);
	if (solution->nb_instuctions > nb_instuctions)
		ft_destroy_paths(&(solution->paths));
	new_path = ft_lstduplicate(path, (void *(*)(void *))ft_strdup, free);
	if (!new_path)
		return (1);
	paths = ft_lstnew(new_path);
	if (!paths)
	{
		ft_lstclear(&new_path, free);
		return (1);
	}
	ft_lstadd_front(&(solution->paths), paths);
	solution->nb_instuctions = nb_instuctions;
	return (0);
}
