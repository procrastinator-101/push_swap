/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:31:42 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/05 23:49:26 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_solve_case(t_solution *solution, t_stack *src, t_list *path, \
			int nb_instuctions)
{
	int		i;
	int		ret;
	t_stack	*tmp;

	if (ft_is_stack_sorted(src, ASCENDANT))
		return (ft_update_solution(solution, path, nb_instuctions));
	if (nb_instuctions > solution->nb_instuctions)
		return (0);
	i = -1;
	while (++i < 3)
	{
		ret = 0;
		tmp = ft_duplicate_stack(src);
		printf("ret = %d\n", ret);
		if (!tmp)
			return (1);
		ft_add_next_step(&path, tmp, i);
		printf("ret1 = %d\n", ret);
		if (path)
			ret = ft_solve_case(solution, tmp, path, nb_instuctions + 1);
		printf("ret2 = %d\n", ret);
		ft_destroy_stack(&tmp);
		printf("ret3 = %d\n", ret);
		if (ret)
			ft_lstclear(&path, free);
		if (!path)
			return (1);
		ft_lstdel_back(&path, free);
	}
	return (0);
}

t_solution	*ft_get_case_solution(t_stack *src)
{
	int			ret;
	t_solution	*solution;

	solution = malloc(sizeof(t_solution));
	if (!solution)
		return (0);
	solution->stack = ft_duplicate_stack(src);
	if (!solution->stack)
	{
		free(solution);
		return (0);
	}
	solution->paths = NULL;
	solution->nb_instuctions = MAX_INSTRUCTIONS;
	ret = ft_solve_case(solution, src, NULL, 0);
	printf("ok\n");
	if (ret)
		ft_delete_lst_solution(&solution);
	return (solution);
}
