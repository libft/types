/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPES_SLIST_I32FAST_H
# define FT_TYPES_SLIST_I32FAST_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_i32fast.h"

typedef struct s_ft_types_slist_i32fast_node
{
	struct s_ft_types_slist_i32fast_node	*next;
	int_fast32_t							value;
}	t_ft_types_slist_i32fast_node;

typedef struct s_ft_types_slist_i32fast
{
	t_ft_types_slist_i32fast_node	*head;
	t_ft_types_slist_i32fast_node	*tail;
	size_t							length;
}	t_ft_types_slist_i32fast;

t_err	ft_types_slist_i32fast_to_array(
			t_ft_types_slist_i32fast *list,
			t_ft_types_array_i32fast *out);

#endif
