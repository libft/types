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

#ifndef FT_TYPES_SLIST_SHORT_H
# define FT_TYPES_SLIST_SHORT_H

# include <stddef.h>
# include "ft_types_array_short.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_short_node
{
	struct s_ft_types_slist_short_node	*next;
	signed short						value;
}	t_ft_types_slist_short_node;

typedef struct s_ft_types_slist_short
{
	t_ft_types_slist_short_node	*head;
	t_ft_types_slist_short_node	*tail;
	size_t						length;
}	t_ft_types_slist_short;

void	ft_types_slist_short_init(
			t_ft_types_slist_short *list);
void	ft_types_slist_short_clear(
			t_ft_types_slist_short *list);
t_err	ft_types_slist_short_to_array(
			t_ft_types_slist_short *list,
			t_ft_types_array_short *out);
t_err	ft_types_slist_short_from_array(
			t_ft_types_array_short *array,
			t_ft_types_slist_short *out);
t_err	ft_types_slist_short_push(
			t_ft_types_slist_short *list,
			signed short value);
t_err	ft_types_slist_short_unshift(
			t_ft_types_slist_short *list,
			signed short value);
bool	ft_types_slist_short_shift(
			t_ft_types_slist_short *list,
			signed short *out);

#endif
