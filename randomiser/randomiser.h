/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomiser.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:34:10 by youness           #+#    #+#             */
/*   Updated: 2021/04/06 22:43:01 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOMISER_H
# define RANDOMISER_H

# include<time.h>
# include <stdio.h>
# include <stdlib.h>
# include "../support_functions/support_functions.h"

int	*generate_irandoms(int nb, int min, int max);

#endif
