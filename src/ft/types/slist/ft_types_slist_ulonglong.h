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

#ifndef FT_TYPES_SLIST_ULONGLONG_H
# define FT_TYPES_SLIST_ULONGLONG_H

# include <stddef.h>
# include "ft_types_array_ulonglong.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_ulonglong_node
{
	struct s_ft_types_slist_ulonglong_node	*next;
	unsigned long long						value;
}	t_ft_types_slist_ulonglong_node;

typedef struct s_ft_types_slist_ulonglong
{
	t_ft_types_slist_ulonglong_node	*head;
	t_ft_types_slist_ulonglong_node	*tail;
	size_t							length;
}	t_ft_types_slist_ulonglong;

void	ft_types_slist_ulonglong_init(
			t_ft_types_slist_ulonglong *list);
void	ft_types_slist_ulonglong_clear(
			t_ft_types_slist_ulonglong *list);
t_err	ft_types_slist_ulonglong_to_array(
			t_ft_types_slist_ulonglong *list,
			t_ft_types_array_ulonglong *out);
t_err	ft_types_slist_ulonglong_from_array(
			t_ft_types_array_ulonglong *array,
			t_ft_types_slist_ulonglong *out);
t_err	ft_types_slist_ulonglong_push(
			t_ft_types_slist_ulonglong *list,
			unsigned long long value);
t_err	ft_types_slist_ulonglong_unshift(
			t_ft_types_slist_ulonglong *list,
			unsigned long long value);
bool	ft_types_slist_ulonglong_shift(
			t_ft_types_slist_ulonglong *list,
			unsigned long long *out);

#endif
