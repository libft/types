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

#ifndef FT_TYPES_SLIST_PTRDIFF_H
# define FT_TYPES_SLIST_PTRDIFF_H

# include <stddef.h>
# include "ft_types_array_ptrdiff.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_ptrdiff_node
{
	struct s_ft_types_slist_ptrdiff_node	*next;
	ptrdiff_t								value;
}	t_ft_types_slist_ptrdiff_node;

typedef struct s_ft_types_slist_ptrdiff
{
	t_ft_types_slist_ptrdiff_node	*head;
	t_ft_types_slist_ptrdiff_node	*tail;
	size_t							length;
}	t_ft_types_slist_ptrdiff;

void	ft_types_slist_ptrdiff_init(
			t_ft_types_slist_ptrdiff *list);
void	ft_types_slist_ptrdiff_clear(
			t_ft_types_slist_ptrdiff *list);
t_err	ft_types_slist_ptrdiff_to_array(
			t_ft_types_slist_ptrdiff *list,
			t_ft_types_array_ptrdiff *out);
t_err	ft_types_slist_ptrdiff_from_array(
			t_ft_types_array_ptrdiff *array,
			t_ft_types_slist_ptrdiff *out);
t_err	ft_types_slist_ptrdiff_push(
			t_ft_types_slist_ptrdiff *list,
			ptrdiff_t value);
t_err	ft_types_slist_ptrdiff_unshift(
			t_ft_types_slist_ptrdiff *list,
			ptrdiff_t value);

#endif
