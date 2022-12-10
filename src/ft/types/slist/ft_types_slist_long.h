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

#ifndef FT_TYPES_SLIST_LONG_H
# define FT_TYPES_SLIST_LONG_H

# include <stddef.h>
# include "ft_types_array_long.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_long_node
{
	struct s_ft_types_slist_long_node	*next;
	signed long							value;
}	t_ft_types_slist_long_node;

typedef struct s_ft_types_slist_long
{
	t_ft_types_slist_long_node	*head;
	t_ft_types_slist_long_node	*tail;
	size_t						length;
}	t_ft_types_slist_long;

void	ft_types_slist_long_init(
			t_ft_types_slist_long *list);
void	ft_types_slist_long_clear(
			t_ft_types_slist_long *list);
t_err	ft_types_slist_long_to_array(
			t_ft_types_slist_long *list,
			t_ft_types_array_long *out);
t_err	ft_types_slist_long_from_array(
			t_ft_types_array_long *array,
			t_ft_types_slist_long *out);
t_err	ft_types_slist_long_push(
			t_ft_types_slist_long *list,
			signed long value);

#endif
