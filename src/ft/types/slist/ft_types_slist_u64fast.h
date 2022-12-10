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

#ifndef FT_TYPES_SLIST_U64FAST_H
# define FT_TYPES_SLIST_U64FAST_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_u64fast.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_u64fast_node
{
	struct s_ft_types_slist_u64fast_node	*next;
	uint_fast64_t							value;
}	t_ft_types_slist_u64fast_node;

typedef struct s_ft_types_slist_u64fast
{
	t_ft_types_slist_u64fast_node	*head;
	t_ft_types_slist_u64fast_node	*tail;
	size_t							length;
}	t_ft_types_slist_u64fast;

void	ft_types_slist_u64fast_clear(
			t_ft_types_slist_u64fast *list);
t_err	ft_types_slist_u64fast_to_array(
			t_ft_types_slist_u64fast *list,
			t_ft_types_array_u64fast *out);

#endif
