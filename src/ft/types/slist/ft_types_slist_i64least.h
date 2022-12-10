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

#ifndef FT_TYPES_SLIST_I64LEAST_H
# define FT_TYPES_SLIST_I64LEAST_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_i64least.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_i64least_node
{
	struct s_ft_types_slist_i64least_node	*next;
	int_least64_t							value;
}	t_ft_types_slist_i64least_node;

typedef struct s_ft_types_slist_i64least
{
	t_ft_types_slist_i64least_node	*head;
	t_ft_types_slist_i64least_node	*tail;
	size_t							length;
}	t_ft_types_slist_i64least;

void	ft_types_slist_i64least_init(
			t_ft_types_slist_i64least *list);
void	ft_types_slist_i64least_clear(
			t_ft_types_slist_i64least *list);
t_err	ft_types_slist_i64least_to_array(
			t_ft_types_slist_i64least *list,
			t_ft_types_array_i64least *out);
t_err	ft_types_slist_i64least_from_array(
			t_ft_types_array_i64least *array,
			t_ft_types_slist_i64least *out);
t_err	ft_types_slist_i64least_push(
			t_ft_types_slist_i64least *list,
			int_least64_t value);
t_err	ft_types_slist_i64least_unshift(
			t_ft_types_slist_i64least *list,
			int_least64_t value);

#endif
