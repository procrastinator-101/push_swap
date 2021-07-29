/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_isportable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:38:33 by youness           #+#    #+#             */
/*   Updated: 2021/07/29 17:38:39 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

int ft_path_isportable(t_path *path)
{
    int     ra;
    int     rra;
    t_path  *head;

    ra = 0;
    rra = 0;
    head = path;
    while (head)
    {
        if (!ft_strcmp(head->str, "ra"))
            ra++;
        else if (!ft_strcmp(head->str, "rra"))
            rra++;
        head = head->next;
    }
    return (rra == ra);
}