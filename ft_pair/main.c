/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:21:23 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 10:25:20 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_pair.h"

int main()
{
	int *p = malloc(100);
	int *p2 = malloc(200);
	int *p3 = malloc(300);

	printf("p = %p\n", p);
	printf("p1 = %p\n", p2);
	printf("p2 = %p\n", p3);
	free(p);
	free(p3);
	printf("p = %p\n", p);
	printf("p1 = %p\n", p2);
	printf("p2 = %p\n", p3);
	return (0);
}
