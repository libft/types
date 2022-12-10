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

#ifndef FT_TYPES_SLIST_UINT_H
# define FT_TYPES_SLIST_UINT_H

# include <stddef.h>
# include "ft_types_array_uint.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_uint_node
{
	struct s_ft_types_slist_uint_node	*next;
	unsigned int						value;
}	t_ft_types_slist_uint_node;

typedef struct s_ft_types_slist_uint
{
	t_ft_types_slist_uint_node	*head;
	t_ft_types_slist_uint_node	*tail;
	size_t						length;
}	t_ft_types_slist_uint;

void	ft_types_slist_uint_clear(
			t_ft_types_slist_uint *list);
t_err	ft_types_slist_uint_to_array(
			t_ft_types_slist_uint *list,
			t_ft_types_array_uint *out);
t_err	ft_types_slist_uint_push(
			t_ft_types_slist_uint *list,
			unsigned int value);

#endif
