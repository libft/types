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

#ifndef FT_TYPES_SLIST_I16FAST_H
# define FT_TYPES_SLIST_I16FAST_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_i16fast.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_i16fast_node
{
	struct s_ft_types_slist_i16fast_node	*next;
	int_fast16_t							value;
}	t_ft_types_slist_i16fast_node;

typedef struct s_ft_types_slist_i16fast
{
	t_ft_types_slist_i16fast_node	*head;
	t_ft_types_slist_i16fast_node	*tail;
	size_t							length;
}	t_ft_types_slist_i16fast;

void	ft_types_slist_i16fast_init(
			t_ft_types_slist_i16fast *list);
void	ft_types_slist_i16fast_clear(
			t_ft_types_slist_i16fast *list);
t_err	ft_types_slist_i16fast_to_array(
			t_ft_types_slist_i16fast *list,
			t_ft_types_array_i16fast *out);
t_err	ft_types_slist_i16fast_from_array(
			t_ft_types_array_i16fast *array,
			t_ft_types_slist_i16fast *out);
t_err	ft_types_slist_i16fast_push(
			t_ft_types_slist_i16fast *list,
			int_fast16_t value);

#endif
