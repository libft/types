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

#ifndef FT_TYPES_SLIST_LONGLONG_H
# define FT_TYPES_SLIST_LONGLONG_H

# include <stddef.h>
# include "ft_types_array_longlong.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_longlong_node
{
	struct s_ft_types_slist_longlong_node	*next;
	signed long long						value;
}	t_ft_types_slist_longlong_node;

typedef struct s_ft_types_slist_longlong
{
	t_ft_types_slist_longlong_node	*head;
	t_ft_types_slist_longlong_node	*tail;
	size_t							length;
}	t_ft_types_slist_longlong;

void	ft_types_slist_longlong_clear(
			t_ft_types_slist_longlong *list);
t_err	ft_types_slist_longlong_to_array(
			t_ft_types_slist_longlong *list,
			t_ft_types_array_longlong *out);
t_err	ft_types_slist_longlong_push(
			t_ft_types_slist_longlong *list,
			signed long long value);

#endif
