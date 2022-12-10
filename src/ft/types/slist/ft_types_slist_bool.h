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

#ifndef FT_TYPES_SLIST_BOOL_H
# define FT_TYPES_SLIST_BOOL_H

# include <stdbool.h>
# include <stddef.h>
# include "ft_types_array_bool.h"

typedef struct s_ft_types_slist_bool_node
{
	struct s_ft_types_slist_bool_node	*next;
	bool								value;
}	t_ft_types_slist_bool_node;

typedef struct s_ft_types_slist_bool
{
	t_ft_types_slist_bool_node	*head;
	t_ft_types_slist_bool_node	*tail;
	size_t						length;
}	t_ft_types_slist_bool;

t_err	ft_types_slist_bool_to_array(
			t_ft_types_slist_bool *list,
			t_ft_types_array_bool *out);

#endif
