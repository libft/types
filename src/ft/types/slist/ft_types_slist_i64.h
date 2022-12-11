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

#ifndef FT_TYPES_SLIST_I64_H
# define FT_TYPES_SLIST_I64_H

# include "ft_types_array_i64.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_i64_node
{
	struct s_ft_types_slist_i64_node	*next;
	t_i64								value;
}	t_ft_types_slist_i64_node;

typedef struct s_ft_types_slist_i64
{
	t_ft_types_slist_i64_node	*head;
	t_ft_types_slist_i64_node	*tail;
	size_t						length;
}	t_ft_types_slist_i64;

void	ft_types_slist_i64_init(
			t_ft_types_slist_i64 *list);
void	ft_types_slist_i64_clear(
			t_ft_types_slist_i64 *list);
t_err	ft_types_slist_i64_to_array(
			t_ft_types_slist_i64 *list,
			t_ft_types_array_i64 *out);
t_err	ft_types_slist_i64_from_array(
			t_ft_types_array_i64 *array,
			t_ft_types_slist_i64 *out);
t_err	ft_types_slist_i64_push(
			t_ft_types_slist_i64 *list,
			t_i64 value);
t_err	ft_types_slist_i64_unshift(
			t_ft_types_slist_i64 *list,
			t_i64 value);
bool	ft_types_slist_i64_shift(
			t_ft_types_slist_i64 *list,
			t_i64 *out);

#endif
