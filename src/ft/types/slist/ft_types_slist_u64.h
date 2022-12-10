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

#ifndef FT_TYPES_SLIST_U64_H
# define FT_TYPES_SLIST_U64_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_u64.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_u64_node
{
	struct s_ft_types_slist_u64_node	*next;
	uint64_t							value;
}	t_ft_types_slist_u64_node;

typedef struct s_ft_types_slist_u64
{
	t_ft_types_slist_u64_node	*head;
	t_ft_types_slist_u64_node	*tail;
	size_t						length;
}	t_ft_types_slist_u64;

void	ft_types_slist_u64_init(
			t_ft_types_slist_u64 *list);
void	ft_types_slist_u64_clear(
			t_ft_types_slist_u64 *list);
t_err	ft_types_slist_u64_to_array(
			t_ft_types_slist_u64 *list,
			t_ft_types_array_u64 *out);
t_err	ft_types_slist_u64_from_array(
			t_ft_types_array_u64 *array,
			t_ft_types_slist_u64 *out);
t_err	ft_types_slist_u64_push(
			t_ft_types_slist_u64 *list,
			uint64_t value);
t_err	ft_types_slist_u64_unshift(
			t_ft_types_slist_u64 *list,
			uint64_t value);

#endif
