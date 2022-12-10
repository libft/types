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

#ifndef FT_TYPES_SLIST_USHORT_H
# define FT_TYPES_SLIST_USHORT_H

# include <stddef.h>
# include "ft_types_array_ushort.h"

typedef struct s_ft_types_slist_ushort_node
{
	struct s_ft_types_slist_ushort_node	*next;
	unsigned short						value;
}	t_ft_types_slist_ushort_node;

typedef struct s_ft_types_slist_ushort
{
	t_ft_types_slist_ushort_node	*head;
	t_ft_types_slist_ushort_node	*tail;
	size_t							length;
}	t_ft_types_slist_ushort;

t_err	ft_types_slist_ushort_to_array(
			t_ft_types_slist_ushort *list,
			t_ft_types_array_ushort *out);

#endif
