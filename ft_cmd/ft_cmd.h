/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 09:48:55 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/20 15:06:49 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CMD_H
# define FT_CMD_H

# include <stdio.h>

# include "../ft_errors/ft_errors.h"

# include "../libft/libft.h"
# include "../ft_pair/ft_pair.h"
# include "../ft_case/ft_case.h"
# include "../ft_stack/ft_stack.h"
# include "../ft_container/ft_container.h"

# define SWAP			1
# define PUSH			2
# define ROTATE			3
# define REVROTATE		4

typedef struct s_cmd
{
	char	type;
	char	target;
}			t_cmd;

#endif
