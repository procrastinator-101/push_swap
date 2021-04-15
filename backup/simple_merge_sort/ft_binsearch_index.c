/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binsearch_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:38:30 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 17:40:25 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**
** make it with binary search
**
*/

int	ft_binsearch_index(int *arr, int size, int val)
{
	int	i;

	if (size < 1)
		return (-1);
	i = 0;
	while (i < size && arr[i] < val)
		i++;
	return (i);
}
