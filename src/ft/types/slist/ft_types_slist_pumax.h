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

#ifndef FT_TYPES_SLIST_PUMAX_H
# define FT_TYPES_SLIST_PUMAX_H

# include "ft_types_array_pumax.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pumax_node
{
	struct s_ft_types_slist_pumax_node	*next;
	t_pumax								value;
}	t_ft_types_slist_pumax_node;

typedef struct s_ft_types_slist_pumax
{
	t_ft_types_slist_pumax_node	*head;
	t_ft_types_slist_pumax_node	*tail;
	size_t						length;
}	t_ft_types_slist_pumax;

void	ft_types_slist_pumax_init(
			t_ft_types_slist_pumax *list);
void	ft_types_slist_pumax_clear(
			t_ft_types_slist_pumax *list);
t_err	ft_types_slist_pumax_to_array(
			t_ft_types_slist_pumax *list,
			t_ft_types_array_pumax *out);
t_err	ft_types_slist_pumax_from_array(
			t_ft_types_array_pumax *array,
			t_ft_types_slist_pumax *out);
t_err	ft_types_slist_pumax_push(
			t_ft_types_slist_pumax *list,
			t_pumax value);
t_err	ft_types_slist_pumax_unshift(
			t_ft_types_slist_pumax *list,
			t_pumax value);
bool	ft_types_slist_pumax_shift(
			t_ft_types_slist_pumax *list,
			t_pumax *out);

#endif
