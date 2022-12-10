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

#ifndef FT_TYPES_SLIST_SIZE_H
# define FT_TYPES_SLIST_SIZE_H

# include <stddef.h>
# include "ft_types_array_size.h"

typedef struct s_ft_types_slist_size_node
{
	struct s_ft_types_slist_size_node	*next;
	size_t								value;
}	t_ft_types_slist_size_node;

typedef struct s_ft_types_slist_size
{
	t_ft_types_slist_size_node	*head;
	t_ft_types_slist_size_node	*tail;
	size_t						length;
}	t_ft_types_slist_size;

t_err	ft_types_slist_size_to_array(
			t_ft_types_slist_size *list,
			t_ft_types_array_size *out);

#endif
