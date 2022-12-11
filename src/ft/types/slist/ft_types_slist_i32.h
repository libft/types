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

#ifndef FT_TYPES_SLIST_I32_H
# define FT_TYPES_SLIST_I32_H

# include "ft_types_array_i32.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_i32_node
{
	struct s_ft_types_slist_i32_node	*next;
	t_i32								value;
}	t_ft_types_slist_i32_node;

typedef struct s_ft_types_slist_i32
{
	t_ft_types_slist_i32_node	*head;
	t_ft_types_slist_i32_node	*tail;
	size_t						length;
}	t_ft_types_slist_i32;

void	ft_types_slist_i32_init(
			t_ft_types_slist_i32 *list);
void	ft_types_slist_i32_clear(
			t_ft_types_slist_i32 *list);
t_err	ft_types_slist_i32_to_array(
			t_ft_types_slist_i32 *list,
			t_ft_types_array_i32 *out);
t_err	ft_types_slist_i32_from_array(
			t_ft_types_array_i32 *array,
			t_ft_types_slist_i32 *out);
t_err	ft_types_slist_i32_push(
			t_ft_types_slist_i32 *list,
			t_i32 value);
t_err	ft_types_slist_i32_unshift(
			t_ft_types_slist_i32 *list,
			t_i32 value);
bool	ft_types_slist_i32_shift(
			t_ft_types_slist_i32 *list,
			t_i32 *out);

#endif
