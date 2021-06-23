/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_functions.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 23:39:00 by youness           #+#    #+#             */
/*   Updated: 2021/04/06 17:55:27 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPPORT_FUNCTIONS_H
# define SUPPORT_FUNCTIONS_H

# include <limits.h>
# include "../libft/libft.h"
# include "../ft_shared_functions/errors.h"

int					ft_issign(char c);
int					ft_isnumber(char *num);
int					ft_atoi_check(char *str, int *error);

int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strrstr(const char *haystack, const char *needle);

double				ft_dmin(double a, double b);
double				ft_dmax(double a, double b);
long long			ft_min(long long a, long long b);
long long			ft_max(long long a, long long b);
unsigned long long	ft_umin(unsigned long long a, unsigned long long b);
unsigned long long	ft_umax(unsigned long long a, unsigned long long b);

#endif
