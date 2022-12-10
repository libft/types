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

#ifndef FT_TYPES_SLIST_INT_H
# define FT_TYPES_SLIST_INT_H

# include <stddef.h>
# include "ft_types_array_int.h"

typedef struct s_ft_types_slist_int_node
{
	struct s_ft_types_slist_int_node	*next;
	signed int							value;
}	t_ft_types_slist_int_node;

typedef struct s_ft_types_slist_int
{
	t_ft_types_slist_int_node	*head;
	t_ft_types_slist_int_node	*tail;
	size_t						length;
}	t_ft_types_slist_int;

t_err	ft_types_slist_int_to_array(
			t_ft_types_slist_int *list,
			t_ft_types_array_int *out);

#endif
