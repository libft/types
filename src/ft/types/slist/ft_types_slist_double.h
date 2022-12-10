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

#ifndef FT_TYPES_SLIST_DOUBLE_H
# define FT_TYPES_SLIST_DOUBLE_H

# include <stddef.h>
# include "ft_types_array_double.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_double_node
{
	struct s_ft_types_slist_double_node	*next;
	double								value;
}	t_ft_types_slist_double_node;

typedef struct s_ft_types_slist_double
{
	t_ft_types_slist_double_node	*head;
	t_ft_types_slist_double_node	*tail;
	size_t							length;
}	t_ft_types_slist_double;

void	ft_types_slist_double_init(
			t_ft_types_slist_double *list);
void	ft_types_slist_double_clear(
			t_ft_types_slist_double *list);
t_err	ft_types_slist_double_to_array(
			t_ft_types_slist_double *list,
			t_ft_types_array_double *out);
t_err	ft_types_slist_double_from_array(
			t_ft_types_array_double *array,
			t_ft_types_slist_double *out);
t_err	ft_types_slist_double_push(
			t_ft_types_slist_double *list,
			double value);

#endif
