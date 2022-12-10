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

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_i32.h"

typedef struct s_ft_types_slist_i32_node
{
	struct s_ft_types_slist_i32_node	*next;
	int32_t								value;
}	t_ft_types_slist_i32_node;

typedef struct s_ft_types_slist_i32
{
	t_ft_types_slist_i32_node	*head;
	t_ft_types_slist_i32_node	*tail;
	size_t						length;
}	t_ft_types_slist_i32;

t_err	ft_types_slist_i32_to_array(
			t_ft_types_slist_i32 *list,
			t_ft_types_array_i32 *out);

#endif
