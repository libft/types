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

#ifndef FT_TYPES_SLIST_U32LEAST_H
# define FT_TYPES_SLIST_U32LEAST_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_u32least.h"

typedef struct s_ft_types_slist_u32least_node
{
	struct s_ft_types_slist_u32least_node	*next;
	uint_least32_t							value;
}	t_ft_types_slist_u32least_node;

typedef struct s_ft_types_slist_u32least
{
	t_ft_types_slist_u32least_node	*head;
	t_ft_types_slist_u32least_node	*tail;
	size_t							length;
}	t_ft_types_slist_u32least;

t_err	ft_types_slist_u32least_to_array(
			t_ft_types_slist_u32least *list,
			t_ft_types_array_u32least *out);

#endif
