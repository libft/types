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

#ifndef FT_TYPES_SLIST_IMAX_H
# define FT_TYPES_SLIST_IMAX_H

# include "ft_types_array_imax.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_imax_node
{
	struct s_ft_types_slist_imax_node	*next;
	t_imax								value;
}	t_ft_types_slist_imax_node;

typedef struct s_ft_types_slist_imax
{
	t_ft_types_slist_imax_node	*head;
	t_ft_types_slist_imax_node	*tail;
	size_t						length;
}	t_ft_types_slist_imax;

void	ft_types_slist_imax_init(
			t_ft_types_slist_imax *list);
void	ft_types_slist_imax_clear(
			t_ft_types_slist_imax *list);
t_err	ft_types_slist_imax_to_array(
			t_ft_types_slist_imax *list,
			t_ft_types_array_imax *out);
t_err	ft_types_slist_imax_from_array(
			t_ft_types_array_imax *array,
			t_ft_types_slist_imax *out);
t_err	ft_types_slist_imax_push(
			t_ft_types_slist_imax *list,
			t_imax value);
t_err	ft_types_slist_imax_unshift(
			t_ft_types_slist_imax *list,
			t_imax value);
bool	ft_types_slist_imax_shift(
			t_ft_types_slist_imax *list,
			t_imax *out);

#endif
